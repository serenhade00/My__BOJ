#include <bits/stdc++.h>

using namespace std;

vector<int> graph[1001];
int indeg[1001];
int sem[1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        indeg[b]++;
    }
    
    queue<int> q;
    for(int i=1; i<=n; i++)
    {
        if(!indeg[i])
            q.push(i);
    }
    int cnt = 1;
    while(!q.empty())
    {
        int size = q.size();
        while(size--)
        {
            auto cur = q.front(); q.pop();
            sem[cur] = cnt;
            for(auto nxt : graph[cur])
            {
                indeg[nxt]--;
                if(!indeg[nxt])
                    q.push(nxt);
            }
        }
        cnt++;
    }
    for(int i=1; i<=n; i++)
        cout << sem[i] << ' ';
}
#include <bits/stdc++.h>

using namespace std;

int n, m, st, en;

vector<int> graph[32001];
int indeg[32001];

void topology_sort(void)
{
    queue<int> q;
    for(int i=1; i<=n; i++)
    {
        if(!indeg[i])
            q.push(i);
    }
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();
        cout << cur << ' ';
        for(auto nxt : graph[cur])
        {
            if(indeg[nxt])
                indeg[nxt]--;
            if(indeg[nxt] == 0)
                q.push(nxt);
        }
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        cin >> st >> en;
        graph[st].push_back(en);
        indeg[en]++;
    }
    topology_sort();
}
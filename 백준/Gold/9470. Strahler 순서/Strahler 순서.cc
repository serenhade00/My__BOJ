#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph;
int indeg[1001];
int order[1001];
int cnt[1001];

void solve(int k, int n)
{
    queue<int> q;
    for(int i=1; i<=n; i++)
    {
        if(!indeg[i])
        {
            order[i] = 1;
            q.push(i);
        }
    }
    while(!q.empty())
    {
        auto cur = q.front(); q.pop();
        for(auto nxt : graph[cur])
        {
            if(indeg[nxt])
            {
                indeg[nxt]--;
                if(order[cur] > order[nxt])
                {
                    order[nxt] = order[cur];
                    cnt[nxt] = 1;
                }
                else if(order[cur] == order[nxt])
                    cnt[nxt]++;
            }
            if(!indeg[nxt])
            {
                q.push(nxt);
                if(cnt[nxt] >= 2)
                    order[nxt]++;       
            }
        }
    }
    cout << k << ' ' << order[n] << '\n';
    fill(indeg+1, indeg+1+n, 0);
    fill(order+1, order+1+n, 0);
    fill(cnt+1, cnt+1+n, 0);
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int k, n, m, a, b;
        cin >> k >> n >> m;
        graph.assign(n+1, vector<int>());
        for(int j=0; j<m; j++)
        {
            cin >> a >> b;
            graph[a].push_back(b);
            indeg[b]++;
        }
        solve(k, n);
    }
}
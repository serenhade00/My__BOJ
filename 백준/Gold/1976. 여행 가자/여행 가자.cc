#include <bits/stdc++.h>

using namespace std;

vector<int> graph[201];
int plan[1001];
int vis[201];

void bfs(int st)
{
    queue<int> q;
    q.push(st);
    vis[st] = 1;
    
    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();
        
        for(auto nxt : graph[cur])
        {
            if(!vis[nxt])
            {
                q.push(nxt);
                vis[nxt] = 1;
            }
        }
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, val;
    cin >> n >> m;
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin >> val;
            if(val)
                graph[i].push_back(j);
        }
    }
    
    for(int i=0; i<m; i++)
        cin >> plan[i];
    
    bfs(plan[0]);
    bool op = 1;
    
    for(int i=0; i<m; i++)
    {
        if(!vis[plan[i]])
            op = 0;
    }
    if(op)
        cout << "YES";
    else
        cout << "NO";
}
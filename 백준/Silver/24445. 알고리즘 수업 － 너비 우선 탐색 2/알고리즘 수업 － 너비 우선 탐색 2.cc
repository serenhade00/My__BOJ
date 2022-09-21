#include <bits/stdc++.h>

using namespace std;

int v, e, st;
vector<int> adj[100001];
int vis[100001];

void bfs()
{
    int num = 1;
    queue<int> q;
    vis[st] = num;
    q.push(st);
    
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();
        for(auto nxt : adj[cur])
        {
            if(!vis[nxt])
            {
                num++;
                q.push(nxt);
                vis[nxt] = num;
            }
        }
    }
    for(int i=1; i<=v; i++)
        cout << vis[i] << '\n';
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> v >> e >> st;
    
    int x, y;
    for(int i=0; i<e; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1; i<=v; i++)
    {
        if(!adj[i].empty())
            sort(adj[i].begin(), adj[i].end(), greater<>());
    }
    
    bfs();
    
}
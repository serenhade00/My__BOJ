#include <bits/stdc++.h>
#define INF 100000000
#define X first
#define Y second

using namespace std;

// 비용, 정점번호
vector<pair<int,int>> adj[1001];


int dist[1001];
int pre[1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int v, e, st_idx, en_idx;
    int st, en, cost;
    cin >> v >> e;
    fill(dist+1, dist+v+1, INF);
    for(int i=0; i<e; i++)
    {
        cin >> st >> en >> cost;
        adj[st].push_back({cost, en});
    }
    cin >> st_idx >> en_idx;
    
    priority_queue<pair<int,int>,
               vector<pair<int,int>>,
               greater<pair<int,int>>> pq;
    
    dist[st_idx] = 0;
    pre[st_idx] = 0;
    pq.push({0, st_idx});
    
    while(!pq.empty())
    {
        auto cur = pq.top();
        pq.pop();
        
        if(dist[cur.Y] != cur.X)
            continue;
        for(auto nxt : adj[cur.Y])
        {
            if(dist[cur.Y] + nxt.X < dist[nxt.Y])
            {
                dist[nxt.Y] = dist[cur.Y] + nxt.X;
                pq.push({dist[nxt.Y], nxt.Y});
                pre[nxt.Y] = cur.Y;
            }
        }
    }
    
    cout << dist[en_idx] << '\n';
    
}
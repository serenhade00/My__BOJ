#include <bits/stdc++.h>
#define INF 10000000
#define X first
#define Y second

using namespace std;

// 비용, 정점번호
vector<pair<int,int>> adj[501];
priority_queue<pair<int,int>,
               vector<pair<int,int>>,
               greater<pair<int,int>>> pq;

int dist[501];
vector<int> used[501];

void dijkstra(int v, int st_idx)
{
    fill(dist, dist+v+1, INF);
    dist[st_idx] = 0;
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
                used[nxt.Y].clear();
                used[nxt.Y].push_back(cur.Y);
            }
            else if(dist[cur.Y] + nxt.X == dist[nxt.Y])
                used[nxt.Y].push_back(cur.Y);
        }
    }
}

void check_used(int st, int cur)
{
    if(cur == st)
        return;
    for(auto nxt : used[cur])
    {
        for(auto& tmp : adj[nxt])
        {
            if(tmp.Y == cur)
            {
            	if(tmp.X != INF)
            	{
            		tmp.X = INF;
            		check_used(st, nxt);	
            	}
            }
        }
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int v, e, st_idx, en_idx;
    int st, en, cost;
    while(1)
    {
        cin >> v >> e;
        if(v == 0 && e == 0)
            break;
        cin >> st_idx >> en_idx;
        for (int i=0; i<v; i++) 
        {
			adj[i].clear();
			used[i].clear();
		}
        for(int i=0; i<e; i++)
        {
            cin >> st >> en >> cost;
            adj[st].push_back({cost, en});
        }
        dijkstra(v, st_idx);
        check_used(st_idx, en_idx);
        dijkstra(v, st_idx);
        if(dist[en_idx] == INF)
            cout << -1 << '\n';
        else
            cout << dist[en_idx] << '\n';
    }  
}
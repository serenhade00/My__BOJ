#include <bits/stdc++.h>
#define INF 10000000
#define X first
#define Y second

using namespace std;

// 비용, 정점번호
vector<pair<int,int>> adj[1001];

int dist[1001];
int to_home[1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int v, e, en_idx;
    int st, en, cost;
    cin >> v >> e >> en_idx;
    fill(dist+1, dist+v+1, INF);
    for(int i=0; i<e; i++)
    {
        cin >> st >> en >> cost;
        adj[st].push_back({cost, en});
    }
    priority_queue<pair<int,int>,
               vector<pair<int,int>>,
               greater<pair<int,int>>> pq;
    
    dist[en_idx] = 0;
    pq.push({0, en_idx});
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
            }
        }
        
    }
    for(int j=1; j<=v; j++)
    		to_home[j] = dist[j];

    int mx = 0;
    for(int k=1; k<=v; k++)
    {
    	if(k == en_idx)
    		continue;
        dist[k] = 0;
        pq.push({0, k});
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
                }
            }
        }
        if(k == en_idx)
        {
        	for(int j=1; j<=v; j++)
        		to_home[j] = dist[j];
        }
        mx = max(mx, dist[en_idx]+to_home[k]);
        fill(dist+1, dist+v+1, INF);
    }
    
    cout << mx;
}
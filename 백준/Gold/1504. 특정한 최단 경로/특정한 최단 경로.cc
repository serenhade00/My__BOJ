#include <bits/stdc++.h>
#define INF 1e9+10
#define X first
#define Y second

using namespace std;

int d[1001];
vector<pair<int,int>> graph[20005];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

long long dijkstra(int v, int st, int en)
{
    fill(d+1, d+1+v, INF);
    
    d[st] = 0;
    pq.push({d[st], st});
    while(!pq.empty())
    {
        auto cur = pq.top(); pq.pop();
        if(d[cur.Y] != cur.X)
            continue;
        for(auto nxt : graph[cur.Y])
        {
            if(d[nxt.Y] <= d[cur.Y] + nxt.X)
                continue;
            d[nxt.Y] = d[cur.Y] + nxt.X;
            pq.push({d[nxt.Y], nxt.Y});
        }
    }
    return d[en];
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int v, e, p1, p2;
    cin >> v >> e;
    for(int i=0; i<e; i++)
    {
        int st, en, edge;
        cin >> st >> en >> edge;
        graph[st].push_back({edge, en});
        graph[en].push_back({edge, st});
    }
    cin >> p1 >> p2;
  
    long long ans1, ans2;
    ans1 = dijkstra(v, 1, p1) + dijkstra(v, p1, p2) + dijkstra(v, p2, v);
    ans2 = dijkstra(v, 1, p2) + dijkstra(v, p2, p1) + dijkstra(v, p1, v);
    long long ans = min(ans1, ans2);
    if(ans >= INF)
        cout << -1;
    else
        cout << ans;
}

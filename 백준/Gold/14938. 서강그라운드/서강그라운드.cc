#include <bits/stdc++.h>
#define INF 1e9+10
#define X first
#define Y second

using namespace std;

int d[101];
int item[101];
vector<pair<int,int>> graph[101];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

int dijkstra(int v, int st, int r)
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
    int ans = 0;
    for(int i=1; i<=v; i++)
    {
        if(d[i] <= r)
            ans += item[i];
    }
    return ans;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int v, r, e;
    cin >> v >> r >> e;
    for(int i=1; i<=v; i++)
        cin >> item[i];
    for(int i=0; i<e; i++)
    {
        int st, en, edge;
        cin >> st >> en >> edge;
        graph[st].push_back({edge, en});
        graph[en].push_back({edge, st});
    }
    int mx = 0;
    for(int i=1; i<=v; i++)
        mx = max(mx, dijkstra(v, i, r));
    cout << mx;
}
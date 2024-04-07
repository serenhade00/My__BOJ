#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

long long ans = 10000000000;
int t;
int vis[100001];
vector<int> graph[100001];
int cost[100001][2];

void solve(int idx)
{
    long long tmp = cost[0][idx];
    queue<pair<int, int>> q;
    q.push({0, idx}); vis[0] = 1;
    while(!q.empty())
    {
        auto cur = q.front(); q.pop();
        for(auto nxt : graph[cur.X])
        {
            if(!vis[nxt])
            {
                q.push({nxt, cur.Y ^ 1});
                tmp += cost[nxt][cur.Y ^ 1];
                vis[nxt] = 1;
            }
        }
    }
    ans = min(ans, tmp);
    fill(vis, vis+t, 0);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> t;
    for(int i=0; i<t-1; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=0; i<t; i++)
    {
        int w, b;
        cin >> w >> b;
        cost[i][0] = w, cost[i][1] = b;
    }
    solve(0);
    solve(1);
    cout << ans;
}
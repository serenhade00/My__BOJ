#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

vector<pair<int,int>> graph[101];
bool not_basis[101];
int indeg[101];
int dp[101];

void solve(int n)
{
    not_basis[n] = 1;
    dp[n] = 1;
    queue<int> q;
    q.push(n);
   
    while(!q.empty())
    {
        auto cur = q.front(); q.pop();
        for(auto nxt : graph[cur])
        {
            indeg[nxt.X]--;
            if(!indeg[nxt.X])
            	q.push(nxt.X);
            dp[nxt.X] += dp[cur]*nxt.Y;
        }
    }
    for(int i=1; i<=n; i++)
	{
		if(!not_basis[i])
			cout << i << ' ' << dp[i] << '\n';
	}
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int x, y, k;
        cin >> x >> y >> k;
        graph[x].push_back({y, k});
        indeg[y]++;
        not_basis[x] = 1;
    }
    solve(n);
}
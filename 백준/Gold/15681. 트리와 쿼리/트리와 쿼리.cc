#include <bits/stdc++.h>

using namespace std;

vector<int> graph[100001];
int dp[100001];

int solve(int cur, int prev)
{
	if(graph[cur].size() == 1 && graph[cur][0] == prev)
	{
		dp[cur] = 1;
		return 1;
	}
	for(auto nxt : graph[cur])
	{
		if(nxt != prev)
			dp[cur] += solve(nxt, cur);
	}
	return dp[cur];
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, r, q, st, en, val;
    cin >> n >> r >> q;
    for(int i=1; i<=n; i++)
    	dp[i] = 1;
    for(int i=0; i<n-1; i++)
    {
    	cin >> st >> en;
    	graph[st].push_back(en);
    	graph[en].push_back(st);
    }
    solve(r, -1);
    for(int i=0; i<q; i++)
    {
    	cin >> val;
    	cout << dp[val] << '\n';
    }
}
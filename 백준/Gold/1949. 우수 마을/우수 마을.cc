#include <bits/stdc++.h>

using namespace std;

int n;
int num[10001];
int dp[10001][2];

vector<vector<int>> graph;

void solve(int cur, int parent) 
{
	dp[cur][1] = num[cur];
	
    for (int nxt : graph[cur]) 
    {
        if (nxt == parent) 
        	continue; 
        solve(nxt, cur); 
        dp[cur][1] += dp[nxt][0];
        dp[cur][0] += max(dp[nxt][0], dp[nxt][1]);
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b;
    cin >> n;
    
    graph.assign(n+1, vector<int>());
    for(int i=1; i<=n; i++)
        cin >> num[i];
    for(int i=1; i<=n-1; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    solve(1, 0);
    cout << max(dp[1][0], dp[1][1]);
}
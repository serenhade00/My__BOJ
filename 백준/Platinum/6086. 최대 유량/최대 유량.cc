#include <bits/stdc++.h>

#define MAX 100
#define INF 999999999

using namespace std;

int n;
int c[MAX][MAX], f[MAX][MAX], vis[MAX];
int adj[MAX][MAX];

int dfs(int a, int T, int flow)
{
	if(vis[a])
		return 0;
	vis[a] = 1;
	
	if(a == T)
		return flow;
	
	for(int i=1; i<=60; i++)
	{
		if(!adj[a][i] || vis[i])
			continue;
		int now_flow = c[a][i] - f[a][i];
		if(now_flow <= 0)
			continue;
		
		int result = dfs(i, T, min(flow, now_flow));
		if(result)
		{
			f[a][i] += result;
			f[i][a] -= result;
			adj[i][a] = 1;
			return result;
		}
	}
	return 0;
}

int maxflow(int S, int T)
{
	int result = 0;
	while(1)
	{
		memset(vis, 0, sizeof(vis));
		int flow = dfs(S, T, INF);
		if(!flow)
			break;
		result += flow;
	}
	return result;
}

int main(void)
{
	cin >> n;
	
	for(int i=0; i<n; i++)
	{
		char u, v;
		int cap;
		cin >> u >> v >> cap;
        
		c[u-64][v-64] += cap;
		c[v-64][u-64] += cap; 
		adj[u-64][v-64] = 1;
		adj[v-64][u-64] = 1;
	}
	
	cout << maxflow(1, 26);
}
#include <bits/stdc++.h>

using namespace std;

int graph[1001][1001];
int vis[1001];

void dfs(int node, int cur)
{
	vis[cur] = 1;
	cout << cur << ' ';
	for(int i=1; i<=node; i++)
	{
		if(!vis[i] && graph[cur][i])
		{
			dfs(node, i);
		}
	}
}

void bfs(int node, int cur)
{
	queue<int> Q;
	
	vis[cur] = 1;
	cout << cur << ' ';
	Q.push(cur);
	while(!Q.empty())
	{
		int c = Q.front();
		Q.pop();
		for(int i=1; i<=node; i++)
		{
			if(vis[i] || graph[c][i]==0)
				continue;
			vis[i] = 1;
			cout << i << ' ';
			Q.push(i);
		}
		
	}
}
int main(void)
{
	int n, m, start;
	int x, y;
	cin >> n >> m >> start;
	
	for(int i=0; i<m; i++)
	{
		cin >> x >> y;
		graph[x][y] = 1;
		graph[y][x] = 1;
	}
	dfs(n, start);
	fill(vis+1, vis+n+1, 0);
	cout << '\n';
	bfs(n, start);
}
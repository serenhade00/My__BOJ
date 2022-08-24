#include <bits/stdc++.h>

using namespace std;

int vis[101];
int graph[101][101];

int bfs(int node, int cur)
{
	queue<int> Q;
	int sum = 0;
	vis[cur] = 1;
	Q.push(cur);
	while(!Q.empty())
	{
		int c = Q.front();
		Q.pop();
		for(int i=1; i<=node; i++)
		{
			if(vis[i] || !graph[c][i])
				continue;
			vis[i] = vis[c] + 1;
			Q.push(i);
		}
	}
    for(int i=1; i<=node; i++)
    {
    	if(i == cur)
    		continue;
    	sum += (vis[i]-1);
    }
       
	return sum;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    int mn;
    int index = 1;
    int x, y;
    cin >> n >> m;
    
    for(int i=0; i<m; i++)
    {
        cin >> x >> y;
        graph[x][y] = 1;
        graph[y][x] = 1;
    }
    mn = bfs(n, 1);
    fill(vis+1, vis+(n+1), 0);
    
    for(int i=2; i<=n; i++)
    {
        if(bfs(n, i) < mn)
        {
        	mn = bfs(n, i);
        	index = i;
        }
        fill(vis+1, vis+(n+1), 0);
    }
    cout << index;
}
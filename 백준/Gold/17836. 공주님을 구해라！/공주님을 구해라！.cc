#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int n, m, t;
int graph[101][101];
int vis[101][101][2]; // z = 0은 칼 x, z = 1는 칼 o

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

int solve()
{
    queue<pair<pair<int,int>, int>> q;
    q.push({{0, 0}, 0});
    vis[0][0][0] = 1;
    
    while(!q.empty())
    {
    	auto cur = q.front(); q.pop();
    	int sword = cur.Y;
    	for(int dir=0; dir<4; dir++)
    	{
    		int nx = cur.X.X + dx[dir];
    		int ny = cur.X.Y + dy[dir];
    		
    		if(nx < 0 || ny < 0 || nx >= n || ny >= m)
    			continue;
    		if(!sword)
    		{
    			if(vis[nx][ny][0] || graph[nx][ny] == 1)
    				continue;
    			if(graph[nx][ny] == 2)
    			{
    				vis[nx][ny][1] = vis[cur.X.X][cur.X.Y][0] + 1;
    				q.push({{nx, ny}, 1});
    			}
    			vis[nx][ny][0] = vis[cur.X.X][cur.X.Y][0] + 1;
    			q.push({{nx, ny}, 0});
    		}
    		else
    		{
    			if(vis[nx][ny][1])
    				continue;
    			vis[nx][ny][1] = vis[cur.X.X][cur.X.Y][1] + 1;
    			q.push({{nx, ny}, 1});
    		}
    	}
    }

    if(vis[n-1][m-1][0] == 0)
    	return vis[n-1][m-1][1] - 1;
	else
		return min(vis[n-1][m-1][0] - 1, vis[n-1][m-1][1] - 1);
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m >> t;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cin >> graph[i][j];
    }
    
    int val = solve();
    if(val == -1 || val > t)
    	cout << "Fail";
    else
    	cout << val;
}
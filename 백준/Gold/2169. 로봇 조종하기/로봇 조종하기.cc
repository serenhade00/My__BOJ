#include <bits/stdc++.h>

using namespace std;

int n, m;
int graph[1001][1001];
int cache[1001][1001][3];
int vis[1001][1001];

int dx[3] = {0, 0, 1};
int dy[3] = {-1, 1, 0};
int solve(int x, int y, int d)
{
	if(x == n-1 && y == m-1)
        return graph[n-1][m-1];

    int &ret = cache[x][y][d];
    if(ret != -123456789)
        return ret;

	for(int dir=0; dir<3; dir++)
	{
		int nx = x + dx[dir];
		int ny = y + dy[dir];
		if(nx < 0 || ny < 0 || nx >= n || ny >= m || vis[nx][ny])
			continue;
		vis[nx][ny] = 1;
		ret = max(ret, solve(nx, ny, dir) + graph[x][y]);
		vis[nx][ny] = 0;
	}
	return ret;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
        	cin >> graph[i][j];
        	cache[i][j][0] = cache[i][j][1] = cache[i][j][2] = -123456789;
        }
    }
    vis[0][0] = 1;
    cout << solve(0, 0, 0);
}
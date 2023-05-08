#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int s[51][51];
int vis[51][51];
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	
	while(1)
	{
		cin >> m >> n;
		int cnt = 0;
		if(n == 0 && m == 0)
			break;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
				cin >> s[i][j];
		}
		
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				if(vis[i][j] || !s[i][j])
					continue;
				queue<pair<int,int> > Q;
				cnt++;
				vis[i][j] = 1;
				Q.push({i, j});
				while(!Q.empty())
				{
					pair<int,int> cur = Q.front();
					Q.pop();
					for(int dir = 0; dir < 8; dir++)
					{
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];
						if(nx < 0 || ny < 0 || nx >= n || ny >= m)
							continue;
						if(vis[nx][ny] || s[nx][ny]!=1)
							continue;
						vis[nx][ny] = 1;
						Q.push({nx, ny});
					}
				}
			}
		}
		for(int i=0; i<n; i++)
			fill(vis[i], vis[i]+m, 0);
		cout << cnt << '\n';
	}
	
	

	
}
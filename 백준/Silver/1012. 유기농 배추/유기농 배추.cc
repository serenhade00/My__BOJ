#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int farm[51][51];
bool vis[51][51];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test, size;
	int n, m;
	int x, y;
	cin >> test;
	for(int i=0; i<test; i++)
	{
		int count = 0;
		cin >> m >> n >> size;
		for(int z=0; z<n; z++)
		{
			fill(farm[z], farm[z]+m, 0);
			fill(vis[z], vis[z]+m, 0);
		}
		for(int j=0; j<size; j++)
		{
			cin >> x >> y;
			farm[y][x] = 1;
		}
		for(int k=0; k<n; k++)
		{
			for(int l=0; l<m; l++)
			{
				if(vis[k][l] || farm[k][l] == 0)
					continue;
				queue<pair<int,int> > Q;
				count++;
				vis[k][l] = 1;
				Q.push({k, l});
				while(!Q.empty())
				{
					pair<int,int> cur = Q.front();
					Q.pop();
					for(int dir = 0; dir < 4; dir++)
					{
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];
						if(nx < 0 || ny < 0 || nx >= n || ny >= m)
							continue;
						if(vis[nx][ny] || farm[nx][ny]!=1)
							continue;
						vis[nx][ny] = 1;
						Q.push({nx, ny});
					}
				}
			}
		}
		cout << count << '\n';
	}
	
	

	
	
	
	
	
}
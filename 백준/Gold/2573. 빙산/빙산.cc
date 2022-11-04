#include <bits/stdc++.h>

#define X first
#define Y second

using namespace std;

int graph[301][301];
int vis[301][301];
int tmp[301][301];

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    int year = 0;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> graph[i][j];
        }
    }
    
    while(1)
    {
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(!graph[i][j] || vis[i][j])
                    continue;
                queue<pair<int,int>> q;
                cnt++;
                q.push({i, j});
                vis[i][j] = 1;
                while(!q.empty())
                {
                	int sub = 0;
                    auto c = q.front();
                    q.pop();
                    for(int dir=0; dir<4; dir++)
                    {
                        int nx = c.X + dx[dir];
                        int ny = c.Y + dy[dir];
                        if(nx < 0 || ny < 0 || nx >= n || ny >= m)
                            continue;
                        if(!graph[nx][ny])
                        	sub++;
                        if(!graph[nx][ny] || vis[nx][ny])
                            continue;
                        q.push({nx, ny});
                        vis[nx][ny] = 1;
                    }
                    tmp[c.X][c.Y] = sub;
                }
            }
        }
		if(cnt >= 2)
		{
			cout << year;
			return 0;
		}
		if(cnt == 0)
		{
			cout << 0;
			return 0;
		}
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                graph[i][j] -= tmp[i][j];
                if(graph[i][j] < 0)
                	graph[i][j] = 0;
            }
        }
        year++;
        for(int i=0; i<n; i++)
        	fill(vis[i], vis[i]+m, 0);
    }
}
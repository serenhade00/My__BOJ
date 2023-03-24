#include <bits/stdc++.h>
#define X first
#define Y second
#define INF 100001

using namespace std;

int n, m;
string graph[101];
int wall[101][101];

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

int solve(int x, int y)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            wall[i][j] = INF;
    }
    
    queue<pair<int,int>> q;
    wall[0][0] = 0; q.push({0, 0});
    while(!q.empty())
    {
        auto cur = q.front(); q.pop();
        for(int dir=0; dir<4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m)
                continue;
            if(graph[nx][ny] == '0')
            {
            	if(wall[cur.X][cur.Y] < wall[nx][ny])
            	{
            		wall[nx][ny] = wall[cur.X][cur.Y];
                	q.push({nx, ny});
            	}
            }
            else
            {
                if(wall[cur.X][cur.Y] + 1 < wall[nx][ny])
                {
                    wall[nx][ny] = wall[cur.X][cur.Y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }
    return wall[x-1][y-1];
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> m >> n;
    
    for(int i=0; i<n; i++)
        cin >> graph[i];
    
    cout << solve(n, m);
}
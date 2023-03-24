#include <bits/stdc++.h>
#define X first
#define Y second
#define INF 3001

using namespace std;

int n;
string graph[51];
int wall[51][51];

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

int solve(int x, int y)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
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
            if(nx < 0 || ny < 0 || nx >= n || ny >= n)
                continue;
            if(graph[nx][ny] == '1')
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

    cin >> n;
    
    for(int i=0; i<n; i++)
        cin >> graph[i];
    
    cout << solve(n, n);
}
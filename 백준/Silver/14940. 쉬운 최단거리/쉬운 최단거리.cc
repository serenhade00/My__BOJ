#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;
using pii = pair<int, int>;

int n, m, st_x, st_y;
int graph[1001][1001];
int vis[1001][1001];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

void bfs()
{
    queue<pii> q;
    q.push({st_x, st_y});
    vis[st_x][st_y] = 1;
    while(!q.empty())
    {
        auto cur = q.front(); q.pop();
        for(int dir=0; dir<4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m || vis[nx][ny] || !graph[nx][ny])
                continue;
            vis[nx][ny] = vis[cur.X][cur.Y] + 1;
            q.push({nx, ny});
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(!vis[i][j])
            {
                if(graph[i][j])
                    cout << -1 << ' ';
                else
                    cout << 0 << ' ';
            }
            else
            	cout << vis[i][j] - 1 << ' ';
        }
        cout << '\n';
    }
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
            if(graph[i][j] == 2)
                st_x = i, st_y = j;
        }
    }
    bfs();
}
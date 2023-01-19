#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int n, m;
char graph[251][251];
int vis[251][251];

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

void solve()
{
    int sheep = 0, wolf = 0;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(graph[i][j] != '#' && !vis[i][j])
            {
                int tmp_sheep = 0, tmp_wolf = 0;
                if(graph[i][j] == 'o')
                	tmp_sheep++;
                if(graph[i][j] == 'v')
                	tmp_wolf++;
                queue<pair<int,int>> q;
                q.push({i, j});
                vis[i][j] = 1;
                while(!q.empty())
                {
                    auto cur = q.front();
                    q.pop();
                    for(int dir=0; dir<4; dir++)
                    {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx < 0 || ny < 0 || nx >= n || ny >= m)
                            continue;
                        if(graph[nx][ny] == '#' || vis[nx][ny])
                            continue;
                        else
                        {
                            if(graph[nx][ny] == 'o')
                                tmp_sheep++;
                            else if(graph[nx][ny] == 'v')
                                tmp_wolf++;
                            vis[nx][ny] = 1;
                            q.push({nx, ny});
                        }
                    }
                }
                if(tmp_sheep > tmp_wolf)
                    sheep += tmp_sheep;
                else
                    wolf += tmp_wolf;
            }
        }
    }
    cout << sheep << ' ' << wolf;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    
    for(int i=0; i<n; i++)
        cin >> graph[i];
    
    solve();
}
#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int n;
string graph[1001];
bool vis[1001][1001];

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

void solve()
{
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(!vis[i][j] && graph[i][j] == '*')
            {
                cnt++;
                queue<pair<int,int>> q;
                q.push({i, j});
                vis[i][j] = 1;
                while(!q.empty())
                {
                    auto cur = q.front(); q.pop();
                    for(int dir=0; dir<4; dir++)
                    {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx < 0 || ny < 0 || nx >= n || ny >= n)
                        	continue;
                        if(graph[nx][ny] == '*' && !vis[nx][ny])
                        {
                            q.push({nx, ny});
                            vis[nx][ny] = 1;
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> graph[i];
    
    solve();
}
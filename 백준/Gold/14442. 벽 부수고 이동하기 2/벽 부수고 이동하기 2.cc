#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

string graph[1001];
int vis[1001][1001][11];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, k;
    int ans = -1;
    cin >> n >> m >> k;
    for(int i=0; i<n; i++)
        cin >> graph[i];
    
    queue<pair<pair<int,int>,int>> q;
    q.push({{0, 0}, k});
    vis[0][0][k] = 1;
    
    while(!q.empty())
    {
        auto cur = q.front();
        int chance = q.front().Y;
        if(cur.X.X == n-1 && cur.X.Y == m-1)
        {
            ans = vis[cur.X.X][cur.X.Y][chance];
            break;
        }
        q.pop();
        for(int dir=0; dir<4; dir++)
        {
            int nx = cur.X.X + dx[dir];
            int ny = cur.X.Y + dy[dir];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m)
                continue;
            if(graph[nx][ny] == '1' && chance && !vis[nx][ny][chance-1])
            {
                vis[nx][ny][chance-1] = vis[cur.X.X][cur.X.Y][chance] + 1;
                q.push({{nx, ny}, chance-1});
            }
            if(graph[nx][ny] == '0' && !vis[nx][ny][chance])
            {
                vis[nx][ny][chance] = vis[cur.X.X][cur.X.Y][chance] + 1;
                q.push({{nx, ny}, chance});
            }
        }
    }
    cout << ans;
}
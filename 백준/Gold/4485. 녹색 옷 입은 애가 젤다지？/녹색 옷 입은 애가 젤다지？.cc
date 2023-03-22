#include <bits/stdc++.h>
#define INF 30001
#define X first
#define Y second

using namespace std;

int n;
int graph[130][130];
int dist[130][130];

int dx[4] = {0, 0, 1, -1};
int dy[4] = {-1, 1, 0, 0};

int solve(int x, int y)
{
    queue<pair<int,int>> q;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            dist[i][j] = INF;
        }
    }
    
    dist[0][0] = 0;
    q.push({0, 0});
    while(!q.empty())
    {
        auto cur = q.front(); q.pop();

        for(int dir=0; dir<4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || ny < 0 || nx >= n || ny >= n)
                continue;
            if(dist[cur.X][cur.Y] + graph[cur.X][cur.Y] < dist[nx][ny])
            {
                dist[nx][ny] = dist[cur.X][cur.Y] + graph[cur.X][cur.Y];
                q.push({nx, ny});
            }
        }
    }
    return dist[x-1][y-1] + graph[x-1][y-1];
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int num = 1;
    cin >> n;
    
    while(n != 0)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cin >> graph[i][j];
        }
        cout << "Problem " << num << ": " << solve(n, n) << '\n';
        cin >> n;
        num++;
    }
}
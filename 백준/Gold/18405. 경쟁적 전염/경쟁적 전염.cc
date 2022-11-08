#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int n, k;
int graph[201][201];
int vis[201][201];
vector<pair<int,int>> v[1001];

queue<pair<int,int>> q;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

void move_virus()
{
    int size = q.size();
    
    while(size--)
    {
        auto cur = q.front();
        q.pop();
        
        for(int dir=0; dir<4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || ny < 0 || nx >= n || ny >= n)
                continue;
            if(vis[nx][ny])
                continue;
            graph[nx][ny] = graph[cur.X][cur.Y];
            vis[nx][ny] = 1;
            q.push({nx, ny});
        }
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> k;
    int sec, x, y;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> graph[i][j];
            if(graph[i][j])
            {
            	v[graph[i][j]].push_back({i, j});
            	vis[i][j] = 1;
            }
        }
    }
    
    for(int i=1; i<=k; i++)
    {
        for(auto e : v[i])
            q.push({e.first, e.second});
    }
    cin >> sec >> x >> y;
    
    while(sec--)
    {
        move_virus();
    }
    
    if(graph[x-1][y-1])
        cout << graph[x-1][y-1];
    else
        cout << 0;
    
}
#include <bits/stdc++.h>
#define X first
#define Y second

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int graph[21][21];
int vis[21][21];

using namespace std;

int n, x, y, ans, ate, cur_size = 2;

bool bfs()
{
    vector<pair<int, pair<int,int>>> fish;
    queue<pair<int,int>> q;
    q.push({x, y});
    vis[x][y] = 1;
    graph[x][y] = 0;
    while(!q.empty())
    {
        auto cur = q.front(); q.pop();
        for(int dir=0; dir<4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || ny < 0 || nx >= n || ny >= n || vis[nx][ny])
                continue;
            if(graph[nx][ny] > cur_size)
                continue;
            if(graph[nx][ny] < cur_size && graph[nx][ny])
                fish.push_back({vis[cur.X][cur.Y] + 1, {nx, ny}});
            vis[nx][ny] = vis[cur.X][cur.Y] + 1;
            q.push({nx, ny});
        }
    }
    if(fish.empty())
        return true;
    
    sort(fish.begin(), fish.end());
    
    ans += vis[fish[0].Y.X][fish[0].Y.Y] - 1;
    graph[fish[0].Y.X][fish[0].Y.Y] = 0;
    x = fish[0].Y.X, y = fish[0].Y.Y;
    ate++;
    if(ate == cur_size)
    {
        cur_size++;
        ate = 0;
    }
    for(int i=0; i<n; i++)
    {
    	for(int j=0; j<n; j++)
    		vis[i][j] = 0;
    }
    return false;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int cnt = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
        	cin >> graph[i][j];
        	if(graph[i][j] == 9)
        		x = i, y = j;
        }
    }
    while(1)
    {
        if(bfs())
        {
            cout << ans;
            return 0;
        }
    }
}
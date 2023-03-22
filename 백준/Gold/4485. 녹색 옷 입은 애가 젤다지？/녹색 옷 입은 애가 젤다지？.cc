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
    priority_queue<pair<int,pair<int,int>>,
                vector<pair<int,pair<int,int>>>,
                greater<pair<int,pair<int,int>>>> pq;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            dist[i][j] = INF;
        }
    }
    
    dist[0][0] = 0;
    pq.push({0, {0, 0}});
    while(!pq.empty())
    {
        auto cur = pq.top(); pq.pop();
        if(cur.X != dist[cur.Y.X][cur.Y.Y])
            continue;
        for(int dir=0; dir<4; dir++)
        {
            int nx = cur.Y.X + dx[dir];
            int ny = cur.Y.Y + dy[dir];
            if(nx < 0 || ny < 0 || nx >= n || ny >= n)
                continue;
            if(dist[cur.Y.X][cur.Y.Y] + graph[cur.Y.X][cur.Y.Y] < dist[nx][ny])
            {
                dist[nx][ny] = dist[cur.Y.X][cur.Y.Y] + graph[cur.Y.X][cur.Y.Y];
                pq.push({dist[nx][ny], {nx, ny}});
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
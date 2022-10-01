#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int n, k, cur_dir;
int graph[101][101];
int snake_vis[101][101];
pair<int, char> apple[101];

deque<pair<int,int>> dq;

int dx[4] = {0, 1, 0, -1}; // 우, 하, 좌, 상
int dy[4] = {1, 0, -1, 0};

bool move_snake(char turn)
{
    int nx, ny;
    if(turn == 'L')
        cur_dir = (cur_dir+3) % 4;
    else if(turn == 'D')
    	cur_dir = (cur_dir+5) % 4;
     
    pair<int,int> cur_head = dq.back();
    pair<int,int> cur_tail = dq.front();
    nx = cur_head.X + dx[cur_dir];
    ny = cur_head.Y + dy[cur_dir];
    if(nx < 0 || ny < 0 || nx >= n || ny >= n)
        return 1;
    if(snake_vis[nx][ny])
        return 1;
    
    snake_vis[nx][ny] = 1;
    if(graph[nx][ny])
        graph[nx][ny] = 0;
    else
    {
        snake_vis[cur_tail.X][cur_tail.Y] = 0;
        dq.pop_front();
    }
    dq.push_back({nx, ny});
    return 0;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x, y, d;
    cin >> n >> k;
    
    for(int i=0; i<k; i++)
    {
        cin >> x >> y;
        graph[x-1][y-1] = 1;
    }
    cin >> d;
    for(int i=0; i<d; i++)
        cin >> apple[i].first >> apple[i].second;
    
    int sec = 0;
    int idx = 0;
    
    dq.push_back({0, 0});
    snake_vis[0][0] = 1;
    while(1)
    {
        sec++;
        bool end = 0;
        if(sec-1 == apple[idx].first)
        {
            end = move_snake(apple[idx].second);
            idx++;
        }
        else
            end = move_snake('N');
       
        if(end)
            break;
    }
    cout << sec;
}
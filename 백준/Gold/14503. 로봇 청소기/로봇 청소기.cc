#include <bits/stdc++.h>

using namespace std;

int n, m, dir;
int graph[51][51];

int dx[4] = {-1, 0, 1, 0}; // 북, 동, 남, 서
int dy[4] = {0, 1, 0, -1};

bool check_empty(int x, int y)
{
    bool op = 0; // 주변에 빈 칸 없음
    for(int dir=0; dir<4; dir++)
    {
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if(!graph[nx][ny])
        {
            op = 1;
            break;
        }
    }
    return op;
}

int move_robot(int cur_x, int cur_y)
{
    int cnt = 0;
    bool flag = 0;
    while(!flag)
    {
        if(!graph[cur_x][cur_y])
        {
            graph[cur_x][cur_y] = 2;
            cnt++;
        }
        if(!check_empty(cur_x, cur_y))
        {
            int back_x = dx[(dir + 2) % 4], back_y = dy[(dir + 2) % 4];
            if(graph[cur_x + back_x][cur_y + back_y] == 2)
                cur_x += back_x, cur_y += back_y;
            else if(graph[cur_x + back_x][cur_y + back_y] == 1)
                flag = 1;
        }
        else
        {
            int tmp_x = cur_x + dx[(dir+3) % 4], tmp_y = cur_y + dy[(dir+3) % 4];
            
            if(!graph[tmp_x][tmp_y])
            	cur_x = tmp_x, cur_y = tmp_y;
            dir = (dir + 3) % 4;
        }
        
    }
    return cnt;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int st_x, st_y;
    cin >> n >> m >> st_x >> st_y >> dir;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cin >> graph[i][j];
    }
	
    cout << move_robot(st_x, st_y);

}
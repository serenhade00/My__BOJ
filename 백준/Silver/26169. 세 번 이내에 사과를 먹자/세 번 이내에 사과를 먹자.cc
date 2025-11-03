#include <bits/stdc++.h>

using namespace std;

bool op;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int graph[5][5];
int vis[5][5];

void dfs(int x, int y, int cnt, int apple)
{
	if(apple >= 2)
		op = 1;
    if(cnt == 3)
        return;

    vis[x][y] = 1;
    for(int dir=0; dir<4; dir++)
    {
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if(nx < 0 || ny < 0 || nx >= 5 || ny >= 5 || graph[nx][ny] == -1 || vis[nx][ny])
            continue;
        if(graph[nx][ny])
            dfs(nx, ny, cnt+1, apple+1);
		else
        	dfs(nx, ny, cnt+1, apple);   
    }
    vis[x][y] = 0;
}

int main(void)
{
    int st_x, st_y;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
            cin >> graph[i][j];
    }
    cin >> st_x >> st_y;
    dfs(st_x, st_y, 0, 0);
    if(op)
    	cout << 1;
    else
    	cout << 0;
}
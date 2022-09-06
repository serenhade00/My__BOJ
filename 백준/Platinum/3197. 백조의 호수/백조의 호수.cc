#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

string graph[1501];
int wvis[1501][1501];
int svis[1501][1501];

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int r, c;
    int st_x, st_y, en_x, en_y;
    cin >> r >> c;
    
    queue<pair<int,int>> cur;
    queue<pair<int,int>> nxt;
    
    queue<pair<int,int>> swan1;
    queue<pair<int,int>> swan2;
    
    bool op = 0;
    for(int i=0; i<r; i++)
    {
        cin >> graph[i];
        for(int j=0; j<c; j++)
        {
            if(graph[i][j] == '.')
            {
                cur.push({i, j});
            }
            else if(graph[i][j] == 'L')
            {
            	if(!op)
            	{
            		st_x = i, st_y = j;
            		cur.push({i, j});
            		op = 1;
            	}
            	else
            	{
            		en_x = i, en_y = j;
            		cur.push({i, j});
            	}
            }
        }
    }
    swan1.push({st_x, st_y});
    int cnt = 0;
    while(1)
    {
        while(!cur.empty())
        {
            auto tmp = cur.front();
            cur.pop();
            graph[tmp.X][tmp.Y] = '.';
            for(int dir=0; dir<4; dir++)
            {
                int nx = tmp.X + dx[dir];
                int ny = tmp.Y + dy[dir];
                if(nx < 0 || ny < 0 || nx >= r || ny >= c)
                    continue;
                if(wvis[nx][ny])
                	continue;
                if(graph[nx][ny] == '.')
                {
                	cur.push({nx, ny});
                	wvis[nx][ny] = 1;
                }
                else
                {
                	nxt.push({nx, ny});
                	wvis[nx][ny] = 1;
                }
            }
        }
		
        while(!swan1.empty())
        {
            auto tmp = swan1.front();
            swan1.pop();
            
            for(int dir=0; dir<4; dir++)
            {
                int nx = tmp.X + dx[dir];
                int ny = tmp.Y + dy[dir];
                if(nx < 0 || ny < 0 || nx >= r || ny >= c)
                    continue;
                if(svis[nx][ny])
                	continue;
                if(graph[nx][ny] == '.')
                {
                    swan1.push({nx, ny});
                    svis[nx][ny] = 1;
                }
                else
                {
                	swan2.push({nx, ny});
                	svis[nx][ny] = 1;
                }
            }
        }
        
        if(svis[en_x][en_y])
        {
        	cout << cnt;
        	return 0;
        }
        
        cur = nxt;
        swan1 = swan2;
        nxt = queue<pair<int,int>>();
        swan2 = queue<pair<int,int>>();
        cnt++;
    }
   
    
}
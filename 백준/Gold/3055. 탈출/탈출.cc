#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int n, m;
string s[51];
int vis[51][51];

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

queue<pair<int,int>> water;
queue<pair<int,int>> hhog;

void move_water(void)
{
    int size = water.size();
    for(int i=0; i<size; i++)
    {
    	auto cur = water.front();
    	water.pop();
    	for(int dir=0; dir<4; dir++)
    	{
    		int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m)
                continue;
            if(s[nx][ny] == 'D' || s[nx][ny] == 'X' || s[nx][ny] == '*')
            	continue;
            s[nx][ny] = '*';
            water.push({nx, ny});
    	}
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> s[i];
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(s[i][j] == 'S')
            {
                hhog.push({i, j});
                vis[i][j] = 1;
            }
            if(s[i][j] == '*')
            {
            	water.push({i, j});
            }
        }
    }
   
    bool op = 0;
    bool out = 0;
    int ans;
    
    while(!hhog.empty())
    {
        move_water();
        int size = hhog.size();
        for(int i=0; i<size; i++)
        {
        	auto cur = hhog.front();
	        hhog.pop();
	        for(int dir=0; dir<4; dir++)
	        {
	            int nx = cur.X + dx[dir];
	            int ny = cur.Y + dy[dir];
	            if(nx < 0 || ny < 0 || nx >= n || ny >= m)
	                continue;
	            if(s[nx][ny] == 'X' || s[nx][ny] == '*' || vis[nx][ny])
	                continue;
	            vis[nx][ny] = vis[cur.X][cur.Y] + 1;
	            hhog.push({nx, ny});
	            if(s[nx][ny] == 'D')
	            {
	                op = 1;
	                out = 1;
	                ans = vis[nx][ny];
	                break;
	            }
	        }
	        
        }
        
        if(out)
        	break;
    }
    if(op)
        cout << ans-1;
    else
        cout << "KAKTUS";
    
}
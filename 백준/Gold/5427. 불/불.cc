#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int n, m;
string s[1001];
int vis[1001][1001];

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

queue<pair<int,int>> fire;
queue<pair<int,int>> player;

void move_fire(void)
{
    int size = fire.size();
    for(int i=0; i<size; i++)
    {
    	auto cur = fire.front();
    	fire.pop();
    	for(int dir=0; dir<4; dir++)
    	{
    		int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m)
                continue;
            if(s[nx][ny] == '#' || s[nx][ny] == 'F')
            	continue;
            s[nx][ny] = 'F';
            fire.push({nx, ny});
    	}
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
    	for(int i=0; i<n; i++)
	    	fill(vis[i], vis[i]+m, 0);
	    	
	    fire = queue<pair<int,int>>();
	    player = queue<pair<int,int>>();
	    cin >> m >> n;
	    for(int i=0; i<n; i++)
	        cin >> s[i];
	    
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<m; j++)
	        {
	            if(s[i][j] == '@')
	            {
	                player.push({i, j});
	                vis[i][j] = 1;
	            }
	            if(s[i][j] == '*')
	            {
	            	fire.push({i, j});
	            }
	        }
	    }
	    int st_x = player.front().X;
	    int st_y = player.front().Y;
	    if(st_x == 0 || st_y == 0 || st_x == n-1 || st_y == m-1)
	    {
	    	cout << 1 << '\n';
	    	continue;
	    }
	    bool op = 0;
	    bool out = 0;
	    int ans;
	    
	    while(!player.empty())
	    {
	        move_fire();
	        int size = player.size();
	        for(int i=0; i<size; i++)
	        {
	        	auto cur = player.front();
		        player.pop();
		        for(int dir=0; dir<4; dir++)
		        {
		            int nx = cur.X + dx[dir];
		            int ny = cur.Y + dy[dir];
		            if(nx < 0 || ny < 0 || nx >= n || ny >= m)
		                continue;
		            if(s[nx][ny] != '.' || vis[nx][ny])
		                continue;
		            vis[nx][ny] = vis[cur.X][cur.Y] + 1;
		            player.push({nx, ny});
		            if(nx == 0 || ny == 0 || nx == n-1 || ny == m-1)
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
	        cout << ans << '\n';
	    else 
	        cout << "IMPOSSIBLE" << '\n';
	        
    }
    
    
}
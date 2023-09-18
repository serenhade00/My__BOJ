#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};
int vis[101][101];
string graph[101];
char ans[101][101];

void bfs(int x, int y, int n, int num, char tmp)
{
    for(int i=0; i<n; i++)
        fill(vis[i], vis[i]+n, 0);
    
    queue<pair<int,int>> q;
    q.push({x, y}); vis[x][y] = 1;
    
    int trial = 0;
    while(trial < num)
    {
    	int turn = q.size();
    	while(turn--)
    	{
    		auto cur = q.front(); q.pop();
	        for(int dir=0; dir<4; dir++)
	        {
	            int nx = cur.X + dx[dir];
	            int ny = cur.Y + dy[dir];
	            if(nx < 0 || ny < 0 || nx >= n || ny >= n || vis[nx][ny])
	                continue;
	            if(graph[nx][ny] == '.')
	            {
	                vis[nx][ny] = vis[cur.X][cur.Y] + 1;
	                q.push({nx, ny});
	            }
	            else if(graph[nx][ny] == '#')
	            {
	                vis[nx][ny] = vis[cur.X][cur.Y] + 1;
            		ans[nx][ny] = tmp;
            		q.push({nx, ny});
	            }
	        }
    	}
        trial++;
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int I, n, k, x, y, num = 0, j_cnt = 0;
    string color, s;
    cin >> I >> n >> k >> color;
    for(int i=0; i<n; i++)
        cin >> graph[i];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            ans[i][j] = graph[i][j];
            if(graph[i][j] == '@')
                x = i, y = j;
        }
    }
    graph[x][y] = '.';
    ans[x][y] = '.';
    cin >> s;
    int tmp = 1;
    for(int i=0; i<k; i++)
    {
        if(s[i] == 'j')
            num++;
        else if(s[i] == 'J')
        {
        	bfs(x, y, n, num, color[j_cnt % I]);
        	j_cnt++;
        	num = 0;
        }
        else if(s[i] == 'U')
        {
        	if(x > 0 && x < n && graph[x-1][y] != '#')
        		x--;
        }
        else if(s[i] == 'D')
        {
        	if(x >= 0 && x < n-1 && graph[x+1][y] != '#')
        		x++;
        }
        else if(s[i] == 'L')
        {
        	if(y > 0 && y < n && graph[x][y-1] != '#')
        		y--;
        }
        else if(s[i] == 'R')
        {
        	if(y >= 0 && y < n-1 && graph[x][y+1] != '#')
        		y++;
        }
    }
    ans[x][y] = '@';
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout << ans[i][j];
        cout << '\n';
    }
}
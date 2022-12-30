#include <bits/stdc++.h>

using namespace std;

int n;
int graph[21][21];
int cache[21][21][3];

int solve(int x1, int y1, int x2, int y2, int dir)
{
    if(x2 < 0 || y2 < 0 || x2 >= n || y2 >= n || graph[x2][y2])
        return 0;
    if(x2 == n-1 && y2 == n-1)
        return 1;
    
    int &ret = cache[x2][y2][dir];
    if(ret != -1)
        return ret;
    
    int horiz = 0, vert = 0, diag = 0;
    if(x1 == x2)
    {
        horiz = solve(x2, y2, x2, y2+1, 0);
        if(!graph[x2+1][y2+1] && !graph[x2+1][y2] && !graph[x2][y2+1])
        	diag = solve(x2, y2, x2+1, y2+1, 2);
    }
    else if(y1 == y2)
    {
        vert = solve(x2, y2, x2+1, y2, 1);
        if(!graph[x2+1][y2+1] && !graph[x2+1][y2] && !graph[x2][y2+1])
        	diag = solve(x2, y2, x2+1, y2+1, 2);
    }
    else
    {
        horiz = solve(x2, y2, x2, y2+1, 0);
        vert = solve(x2, y2, x2+1, y2, 1);
        if(!graph[x2+1][y2+1] && !graph[x2+1][y2] && !graph[x2][y2+1])
        	diag = solve(x2, y2, x2+1, y2+1, 2);
    }
    
    return cache[x2][y2][dir] = horiz + vert + diag;
        
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    memset(cache, -1, sizeof(cache));
    
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin >> graph[i][j];
    }
    
    cout << solve(0, 0, 0, 1, 0);
}
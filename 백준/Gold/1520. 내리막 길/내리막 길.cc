#include <bits/stdc++.h>

using namespace std;

int n, m;
int graph[501][501];
int cache[501][501];

int solve(int x, int y) // 좌표 (x, y) 에서 (n, m) 도달하는 방법
{
    if(x == n-1 && y == m-1)
        return 1;
    if(x < 0 || y < 0 || x >= n || y >= m)
        return 0;
    
    int &ret = cache[x][y];
    if(ret != -1)
        return ret;
    
    int cur = graph[x][y];
    int l = 0, r = 0, u = 0, d = 0;
    if(graph[x][y-1] < cur)
        l = solve(x, y-1);
    if(graph[x][y+1] < cur)
        r = solve(x, y+1);
    if(graph[x-1][y] < cur)
        u = solve(x-1, y);
    if(graph[x+1][y] < cur)
        d = solve(x+1, y);
    
    return cache[x][y] = l + r + u + d;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    memset(cache, -1, sizeof(cache));
    cin >> n >> m;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cin >> graph[i][j];
    }
    cout << solve(0, 0);
}
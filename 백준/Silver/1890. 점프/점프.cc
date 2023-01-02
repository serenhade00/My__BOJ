#include <bits/stdc++.h>

using namespace std;

int n;
int graph[101][101];
long long cache[101][101];

long long solve(int x, int y)
{
    if(x < 0 || y < 0 || x >= n || y >= n)
        return 0;
    if(x == n-1 && y == n-1)
        return 1;
    if(!graph[x][y])
        return 0;
    
    long long &ret = cache[x][y];
    if(ret != -1)
        return ret;
    
    long long r = 0, d = 0;
    int cur = graph[x][y];
    r = solve(x, y+cur), d = solve(x+cur, y);
    return cache[x][y] = r + d;
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
    
    cout << solve(0, 0);
    
}
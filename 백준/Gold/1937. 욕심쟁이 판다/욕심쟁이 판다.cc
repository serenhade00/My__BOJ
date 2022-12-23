#include <bits/stdc++.h>

using namespace std;

int n;
int graph[501][501];
int cache[501][501];

int panda(int x, int y)
{
    int mx = 0;
    int cur = graph[x][y];
    if(x < 0 || y < 0 || x >= n || y >= n)
        return 0;
    if(graph[x+1][y] <= cur && graph[x][y+1] <= cur && 
       graph[x-1][y] <= cur && graph[x][y-1] <= cur)
        return 0;
    
    int &ret = cache[x][y];
    if(ret != -1)
        return ret;
    
    int l = 0, r = 0, u = 0, d = 0;
    if(graph[x-1][y] > cur)
        u = max(mx, panda(x-1, y) + 1);
    if(graph[x][y-1] > cur)
        l = max(mx, panda(x, y-1) + 1);
    if(graph[x+1][y] > cur)
        d = max(mx, panda(x+1, y) + 1);
    if(graph[x][y+1] > cur)
        r = max(mx, panda(x, y+1) + 1);
    
    return cache[x][y] = max({u, l, d, r});
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    memset(cache, -1, sizeof(cache));
    
    for(int i=0; i<n; i++)
    {
    	for(int j=0; j<n; j++)
    		cin >> graph[i][j];
    }
    int mx = 0;
    for(int i=0; i<n; i++)
    {
    	for(int j=0; j<n; j++)
    	{
    		mx = max(mx, panda(i, j)+1);
    	}
    }
    cout << mx;
}
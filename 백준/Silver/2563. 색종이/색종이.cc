#include <bits/stdc++.h>

using namespace std;

int graph[101][101];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x, y;
        cin >> x >> y;
        for(int i=x; i<x+10; i++)
        {
            for(int j=y; j<y+10; j++)
            {
                graph[i][j] = 1;
            }
        }
    }
    int ans = 0;
    for(int i=0; i<101; i++)
    {
        for(int j=0; j<101; j++)
        {
            if(graph[i][j])
                ans++;
        }     
    }
    cout << ans;
}

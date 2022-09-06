#include <bits/stdc++.h>

using namespace std;

string graph[1001];
int dp[1001][1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
    {
        cin >> graph[i];
        for(int j=1; j<=m; j++)
        {
            if(graph[i][j-1] == '1')
                dp[i][j] = 1;
        }
    }
    int mx = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(dp[i][j])
            {
            	dp[i][j] = min({dp[i][j-1], dp[i-1][j], dp[i-1][j-1]}) + 1;
            }
            mx = max(mx, dp[i][j]);
        }
    }
    
    cout << mx*mx;
}
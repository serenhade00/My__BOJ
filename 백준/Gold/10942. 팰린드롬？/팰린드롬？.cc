#include <bits/stdc++.h>

using namespace std;

int num[2001];
int dp[2001][2001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n;
    
    for(int i=1; i<=n; i++)
        cin >> num[i];
    
    for(int i=1; i<n; i++)
    {
        if(num[i] == num[i+1])
            dp[i][i+1] = 1;
    }
    
    for(int i=1; i<=n; i++)
        dp[i][i] = 1;
    
    for(int i=n-1; i>=1; i--)
    {
        for(int j=i+2; j<=n; j++)
        {
            if(num[i] == num[j] && dp[i+1][j-1])
                dp[i][j] = 1;
        }
    }
    
    cin >> m;
    for(int i=0; i<m; i++)
    {
        int a, b;
        cin >> a >> b;
        
        cout << dp[a][b] << '\n';
    }
}
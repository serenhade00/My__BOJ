#include <bits/stdc++.h>

using namespace std;

int dp[11];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    dp[1] = 0, dp[2] = 1, dp[3] = 3;
    
    int n;
    cin >> n;
    for(int i=4; i<=n; i++)
    {
        for(int j=1; j<=i/2; j++)
        {
            dp[i] = max(dp[i], dp[j]+dp[i-j] + j*(i-j));
        }
    }
    cout << dp[n];
}
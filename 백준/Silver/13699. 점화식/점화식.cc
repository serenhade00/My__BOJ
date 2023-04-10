#include <bits/stdc++.h>

using namespace std;

long long dp[36];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    dp[0] = 1, dp[1] = 1;
    int n;
    cin >> n;
    for(int i=2; i<=n; i++)
    {
        for(int j=0; j<i; j++)
        {
            dp[i] += dp[j]*dp[i-j-1];
        }
    }
    cout << dp[n];
}
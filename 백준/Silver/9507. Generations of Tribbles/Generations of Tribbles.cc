#include <bits/stdc++.h>

using namespace std;

long long dp[70];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    dp[0] = 1, dp[1] = 1, dp[2] = 2, dp[3] = 4;
    for(int i=4; i<=67; i++)
        dp[i] = dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4];
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int num;
        cin >> num;
        cout << dp[num] << '\n';
    }
}
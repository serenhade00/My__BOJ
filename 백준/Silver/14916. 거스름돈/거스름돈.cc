#include <bits/stdc++.h>

using namespace std;

int dp[100001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    dp[2] = 1;
    dp[5] = 1;
    for(int i=4; i<=n; i++)
    {
        if(dp[i-2])
            dp[i] = dp[i-2] + 1;
        if(dp[i-5])
            dp[i] = dp[i-5] + 1;
    }
    if(dp[n])
    	cout << dp[n];
    else
    	cout << -1;
}
#include <bits/stdc++.h>

using namespace std;

int dp[50001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    dp[1] = 1;
    for(int i=2; i<=n; i++)
    {
        int mn = 5;
        for(int j=1; j*j<=i; j++)
        {
            int tmp = i - j*j;
            mn = min(mn, dp[tmp] + 1);
        }
        dp[i] = mn;
    }
    cout << dp[n];
}

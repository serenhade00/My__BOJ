#include <bits/stdc++.h>

using namespace std;

long long num[100005];
long long dp[100005][2]; // 0: 사용 X, 1: 사용 O.

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> num[i];
    
    dp[1][1] = num[1];
    dp[2][0] = dp[1][1];
    dp[2][1] = num[2];
    
    for(int i=3; i<=n; i++)
    {
        dp[i][0] = dp[i-1][1];
        dp[i][1] = min(dp[i-1][0], dp[i-1][1]) + num[i];
    }
    cout << min(dp[n][0], dp[n][1]);
}
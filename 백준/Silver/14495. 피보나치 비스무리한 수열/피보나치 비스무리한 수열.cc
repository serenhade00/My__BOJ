#include <iostream>

using namespace std;

long long dp[121];

int main(void)
{
    dp[1] = dp[2] = dp[3] = 1;
    int n;
    cin >> n;
    for(int i=4; i<=n; i++)
        dp[i] = dp[i-1] + dp[i-3];
    cout << dp[n];
}
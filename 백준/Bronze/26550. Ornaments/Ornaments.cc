#include <bits/stdc++.h>

using namespace std;

long long dp[1000001];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long num = 1;
    dp[1] = 1;
    for(int i=2; i<=1000000; i++)
    {
        num += i;
        dp[i] = dp[i-1] + num;
    }
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }
}
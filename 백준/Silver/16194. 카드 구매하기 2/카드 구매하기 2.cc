#include <bits/stdc++.h>
#define MAX 10000001

using namespace std;

int num[1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, val;
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> num[i];
    
    vector<int> dp(n+1, MAX);
    dp[0] = 0;
    dp[1] = num[1];
    for(int i=2; i<=n; i++)
    {
        for(int j=0; j<=i; j++)
            dp[i] = min(dp[i], dp[j] + num[i-j]);
    }
    cout << dp[n];
}
#include <bits/stdc++.h>

using namespace std;

int num[201];
int dp[201];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++)
        dp[i] = 1;
    
    for(int i=1; i<=n; i++)
        cin >> num[i];
    
    int ans = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<i; j++)
        {
            if(num[i] > num[j])
                dp[i] = max(dp[i], dp[j]+1);
        }
        ans = max(ans, dp[i]);
    }
    cout << n-ans;
}
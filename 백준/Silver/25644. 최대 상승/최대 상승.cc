#include <bits/stdc++.h>

using namespace std;

int num[200001];
int dp[200001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> num[i];
    
    int mn = num[0];
    for(int i=1; i<n; i++)
    {
        if(num[i] <= mn)
        {
            mn = num[i];
            dp[i] = dp[i-1];
        }
        else
            dp[i] = max(num[i] - mn, dp[i-1]);
    }
    cout << dp[n-1];
}
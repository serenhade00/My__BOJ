#include <bits/stdc++.h>

using namespace std;

int dp[200001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    cin >> n >> k;
    
    vector<int> pie(n+k);
    for(int i=1; i<=n; i++)
        cin >> pie[i];
        
    for(int i=1; i<k; i++)
    	pie[n+i] = pie[i];
    
    dp[1] = pie[1];
    for(int i=2; i<=n+k-1; i++)
        dp[i] = dp[i-1] + pie[i];
        
    int mx = 0;
    int sum;
    for(int i=k; i<=n+k-1; i++)
    {
        sum = dp[i]-dp[i-k];
        mx = max(mx, sum);
    }
    cout << mx;
}
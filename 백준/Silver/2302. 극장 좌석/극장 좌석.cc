#include <bits/stdc++.h>

using namespace std;

int seat[41];
int dp[41];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, val;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        cin >> val;
        seat[val] = 1;
    }
    dp[1] = 1;
    if(seat[2])
    {
    	dp[2] = 1;
    }
    else
    {
    	if(seat[1])
    		dp[2] = 1;
    	else
    		dp[2] = 2;
    }
    for(int i=3; i<=n; i++)
    {
        if(!seat[i])
        {
        	if(!seat[i-1])
            	dp[i] = dp[i-2] + dp[i-1];
            else
            	dp[i] = dp[i-1];
        }
        else
        {
            dp[i] = dp[i-1];
        }
    }
    cout << dp[n];
}
#include <bits/stdc++.h>

using namespace std;

long long dp[101][21];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, val;
    cin >> n;
    cin >> val;
    dp[1][val] = 1;
    for(int i=2; i<=n; i++)
    {
    	cin >> val;
    	for(int j=0; j<=20; j++)
    	{
    		if(j-val >= 0)
    			dp[i][j-val] += dp[i-1][j];
    		if(j+val <= 20)
    			dp[i][j+val] += dp[i-1][j];
    	}
    }
    cin >> val;
    cout << dp[n-1][val];
}
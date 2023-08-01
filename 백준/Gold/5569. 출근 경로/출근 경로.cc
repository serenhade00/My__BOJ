#include <bits/stdc++.h>
#define MOD 100000

using namespace std;

long long dp[101][101][4];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int w, h;
    cin >> w >> h;
    
    for(int i=2; i<=h; i++)
        dp[i][1][1] = 1LL;
    for(int j=2; j<=w; j++)
        dp[1][j][0] = 1LL;
    dp[2][2][2] = 1LL, dp[2][2][3] = 1LL;
    
    for(int i=2; i<=h; i++)
    {
        for(int j=2; j<=w; j++)
        {
        	if(i == 2 && j == 2)
        		continue;
        	if(j > 2)
            	dp[i][j][0] = (dp[i][j-2][0] + dp[i][j-2][1] + dp[i][j-2][2]) % MOD;
            if(i > 2)
            	dp[i][j][1] = (dp[i-2][j][0] + dp[i-2][j][1] + dp[i-2][j][3]) % MOD;
            dp[i][j][2] = (dp[i-1][j-1][1] + dp[i-1][j-1][3]) % MOD;
            dp[i][j][3] = (dp[i-1][j-1][0] + dp[i-1][j-1][2]) % MOD;
        }
    }
    cout << (dp[h][w][0] + dp[h][w][1] + dp[h][w][2] + dp[h][w][3]) % MOD;
}
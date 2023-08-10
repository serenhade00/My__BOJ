#include <bits/stdc++.h>
#define INF numeric_limits<int>::max()

using namespace std;

int num[501];
int dp[501][501];
int sum[501];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--)
    {
    	int n;
    	cin >> n;
    	for(int i=1; i<=n; i++)
	    	fill(dp[i], dp[i]+n+1, INF);
	    for(int i=1; i<=n; i++)
	        cin >> num[i];
	    for(int i=1; i<=n; i++)
	    {
	    	dp[i][i] = num[i];
	    	sum[i] = sum[i-1] + num[i];
	    }
	    for(int i=1; i<n; i++)
	        dp[i][i+1] = num[i]+num[i+1];
	   
	    for(int i=2; i<n; i++) // 횟수
	    {
	        for(int j=1; j<=n-i; j++) // st idx , gap..
	        {
	            int gap = i;
	            for(int k=0; k<gap; k++)
	            {
	                if(k == 0)
	                    dp[j][j+gap] =  min(dp[j][j+gap], dp[j+k+1][j+gap] + sum[j+gap]-sum[j-1]);
	                else if(k == gap-1)
	                    dp[j][j+gap] =  min(dp[j][j+gap], dp[j][j+k] + sum[j+gap]-sum[j-1]);
	                else
	                    dp[j][j+gap] =  min(dp[j][j+gap], dp[j][j+k] + dp[j+k+1][j+gap] + sum[j+gap]-sum[j-1]);
	            }
	        }
	    }
	    cout << dp[1][n] << '\n';
    }
}
#include <bits/stdc++.h>
#define MAX 10000001

using namespace std;

int delta[51];
bool dp[51][1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, s, m;
    cin >> n >> s >> m;
    for(int i=1; i<=n; i++)
	    cin >> delta[i];
	
	if(s - delta[1] >= 0)
		dp[1][s - delta[1]] = 1;
	if(s + delta[1] <= m)
		dp[1][s + delta[1]] = 1;
		
	for(int i=2; i<=n; i++)
	{
		for(int j=0; j<=m; j++)
		{
			if(dp[i-1][j])
			{
				if(j - delta[i] >= 0)
					dp[i][j-delta[i]] = 1;
				if(j + delta[i] <= m)
					dp[i][j+delta[i]] = 1;
			}
		}
	}
	for(int i=m; i>=0; i--)
	{
		if(dp[n][i])
		{
			cout << i;
			return 0;
		}
	}
	cout << -1;
}
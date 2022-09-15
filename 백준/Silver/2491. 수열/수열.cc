#include <bits/stdc++.h>

using namespace std;

int num[100001];
int dp[100001][2]; // 증가, 감소

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> num[i];
    
	for(int i=1; i<=n; i++)
		fill(dp[i], dp[i]+2, 1);
    int mx = 1;

    for(int i=2; i<=n; i++)
    {
        if(num[i] > num[i-1])
            dp[i][0] = dp[i-1][0] + 1;
        else if(num[i] == num[i-1])
        	dp[i][0] = dp[i-1][0] + 1, dp[i][1] = dp[i-1][1] + 1;
        else
        	dp[i][1] = dp[i-1][1] + 1;
            
        mx = max({mx, dp[i][0], dp[i][1]});
    }
    cout << mx;
}
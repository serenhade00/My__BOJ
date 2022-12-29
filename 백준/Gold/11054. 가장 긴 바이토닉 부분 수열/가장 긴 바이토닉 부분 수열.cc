#include <bits/stdc++.h>

using namespace std;

int num[1001];
int dp[1001][2];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++)
        dp[i][0] = dp[i][1] = 1;
    for(int i=1; i<=n; i++)
        cin >> num[i];
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<i; j++)
        {
            if(num[i] > num[j])
                dp[i][0] = max(dp[i][0], dp[j][0] + 1);
            else if(num[i] == num[j])
                dp[i][0] = dp[j][0], dp[i][1] = dp[j][1];
            else
                dp[i][1] = max({dp[i][1], dp[j][0] + 1, dp[j][1] + 1});
        }
    }
    int mx = 0;
    for(int i=1; i<=n; i++)
    	mx = max({mx, dp[i][0], dp[i][1]});
    cout << mx;
}
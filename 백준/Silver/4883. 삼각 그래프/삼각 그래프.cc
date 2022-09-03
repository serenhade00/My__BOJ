#include <bits/stdc++.h>

using namespace std;

int num[100001][4];
int dp[100001][4];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    int cnt = 1;
    cin >> n;
    while(n != 0)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=3; j++)
            {
                cin >> num[i][j];
            }
        }
        dp[1][2] = num[1][2];
        dp[1][3] = dp[1][2] + num[1][3];
        dp[2][1] = dp[1][2] + num[2][1];
        dp[2][2] = min({dp[1][2], dp[1][3], dp[2][1]}) + num[2][2];
        dp[2][3] = min({dp[1][2], dp[1][3], dp[2][2]}) + num[2][3];
        for(int i=3; i<=n; i++)
        {
            dp[i][1] = min(dp[i-1][1], dp[i-1][2])+num[i][1];
            dp[i][2] = min({dp[i-1][1], dp[i-1][2], dp[i-1][3], dp[i][1]})+num[i][2];
            dp[i][3] = min({dp[i-1][2], dp[i-1][3], dp[i][2]})+num[i][3];
        }
        cout << cnt << ". " << dp[n][2] << '\n';
        for(int i=1; i<=n; i++)
            fill(dp[i], dp[i]+4, 0);
        cin >> n;
        cnt++;
    }
}
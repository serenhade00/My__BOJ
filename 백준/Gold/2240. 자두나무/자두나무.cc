#include <bits/stdc++.h>

using namespace std;

int tree[1001];
int dp[3][1001][31]; // 현재 자두 위치, level, 이동 수

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, w, mx = 0;
    cin >> t >> w;
    for(int i=1; i<=t; i++)
        cin >> tree[i];
    
    if(tree[1] == 1)
        dp[1][1][0] = 1;
    else if(tree[1] == 2)
        dp[2][1][1] = 1;
    
    for(int i=2; i<=t; i++)
    {
        for(int j=0; j<=w; j++)
        {
            if(j == 0)
            {
                if(tree[i] == 1)
                {
                    dp[1][i][j] = dp[1][i-1][j] + 1;
                    dp[2][i][j] = dp[2][i-1][j];
                }
                else
                {
                    dp[1][i][j] = dp[1][i-1][j];
                    dp[2][i][j] = dp[2][i-1][j] + 1;
                }
            }
            else
            {
                if(tree[i] == 1)
                {
                    dp[1][i][j] = max(dp[1][i-1][j], dp[2][i-1][j-1]) + 1;
                    dp[2][i][j] = max(dp[1][i-1][j-1], dp[2][i-1][j]);
                }
                else
                {
                    dp[1][i][j] = max(dp[1][i-1][j], dp[2][i-1][j-1]);
                    dp[2][i][j] = max(dp[1][i-1][j-1], dp[2][i-1][j]) + 1;
                }
            }
        }
    }
    for(int i=1; i<=2; i++)
    {
        for(int j=0; j<=w; j++)
        {
            mx = max(dp[i][t][j], mx);
        }
    }
    cout << mx;
}
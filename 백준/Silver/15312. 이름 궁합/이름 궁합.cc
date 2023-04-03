#include <bits/stdc++.h>

using namespace std;

int alpha[27] = {0, 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
int num[4001];
int dp[4001][4001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s1, s2;
    cin >> s1 >> s2;
    
    int idx = 1;
    int len = s1.size();
    for(int i=0; i<len; i++)
    {
        dp[1][idx] = alpha[s1[i]-64];
        dp[1][idx+1] = alpha[s2[i]-64];
        idx += 2;
    }
    for(int i=2; i<=2*len-1; i++)
    {
        for(int j=1; j<=2*len-i+2; j++)
        {
            dp[i][j] = (dp[i-1][j] + dp[i-1][j+1]) % 10;
        }
    }
    cout << dp[2*len-1][1] << dp[2*len-1][2];
}
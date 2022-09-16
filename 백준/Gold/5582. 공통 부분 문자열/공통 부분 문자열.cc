#include <bits/stdc++.h>

using namespace std;

int dp[4001][4001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s1, s2;
    cin >> s1 >> s2;
    
    int mx = 0;
    int len1 = s1.size(), len2 = s2.size();
    for(int i=1; i<=len1; i++)
    {
        for(int j=1; j<=len2; j++)
        {
            if(s1[i-1] == s2[j-1])
            {
            	if(dp[i-1][j-1])
                	dp[i][j] = dp[i-1][j-1] + 1;
                else
                	dp[i][j] = 1;
            }
        }
        mx = max(mx, *max_element(dp[i], dp[i]+1+len2));
    }
    cout << mx;
    
}
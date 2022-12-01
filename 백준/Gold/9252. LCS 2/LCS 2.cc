#include <bits/stdc++.h>

using namespace std;

int dp[1001][1001];

void print_lcs(string &s1, string &s2)
{
    string ans;
    int i = s1.size(), j = s2.size();
    while(i > 0 && j > 0)
    {
        if(dp[i][j-1] == dp[i][j])
            j--;
        else if(dp[i-1][j] == dp[i][j])
            i--;
        else
        {
            ans += s1[i-1];
            i--, j--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s1, s2;
    cin >> s1 >> s2;
    
    int len1 = s1.size(), len2 = s2.size();
    for(int i=1; i<=len1; i++)
    {
        for(int j=1; j<=len2; j++)
        {
            if(s1[i-1] == s2[j-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1; 
            }
            else
            {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    cout << dp[len1][len2] << '\n';
    print_lcs(s1, s2);
}
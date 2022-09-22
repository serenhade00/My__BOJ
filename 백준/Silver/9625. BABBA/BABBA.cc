#include <bits/stdc++.h>
#define A first
#define B second

using namespace std;

pair<int,int> dp[50];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    dp[0].A = 1;
    for(int i=1; i<=n; i++)
    {
        dp[i].A = dp[i-1].B;
        dp[i].B = dp[i-1].B + dp[i-1].A;
    }
    cout << dp[n].A << ' ' << dp[n].B;
}
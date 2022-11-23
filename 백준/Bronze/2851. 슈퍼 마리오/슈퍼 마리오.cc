#include <iostream>

using namespace std;

int dp[11];
int main(void)
{
    int val;
    int sum = 0;
    for(int i=1; i<=10; i++)
    {
        cin >> val;
        dp[i] += dp[i-1] + val;
    }
    int mn = abs(dp[1]-100);
    int ans = dp[1];
    for(int i=1; i<=10; i++)
    {
        if(abs(dp[i]-100) <= mn)
        {
            ans = dp[i];
            mn = abs(dp[i]-100);
        }
    }
    cout << ans;
    
}
    
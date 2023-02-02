#include <iostream>

using namespace std;

int num[301][301];
int dp[301][301];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, k;
    cin >> n >> m;
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            cin >> num[i][j];
    }
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + num[i][j];
        }
    }
    cin >> k;
    for(int i=0; i<k; i++)
    {
    	int a, b, c, d;
    	cin >> a >> b >> c >> d;
    	cout << dp[c][d] - dp[a-1][d] - dp[c][b-1] + dp[a-1][b-1] << '\n';
    }
}
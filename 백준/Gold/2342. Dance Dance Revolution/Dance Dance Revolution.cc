#include <bits/stdc++.h>
#define MAX 500001

using namespace std;

int dp[100001][5][5]; // x번째 trial의 y(왼쪽), z(오른쪽) 좌표일때의 값

int cost(int a,int b)
{
	if(a==0 && (b==1 || b==2 || b==3 || b==4))
		return 2;
	else if(a==1&&(b==2||b==4) || a==2&&(b==1||b==3) || a==3&&(b==2||b==4) || a==4&&(b==1||b==3))
		return 3;
	else if(a==1&&b==3 || a==2&&b==4 || a==3&&b==1 || a==4&&b==2)
		return 4;
	else
		return 1;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, cnt = 1;
    for(int i=1; i<=100000; i++)
    {
        for(int j=0; j<=4; j++)
        {
            for(int k=0; k<=4; k++)
                dp[i][j][k] = MAX;
        }
    }
    while(1)
    {
        cin >> n;
        if(n == 0)
            break;
        if(cnt == 1)
            dp[1][n][0] = 2, dp[1][0][n] = 2;
        else
        {
            for(int i=0; i<=4; i++)
            {
                for(int j=0; j<=4; j++)
                {
                    if(n != j)
                        dp[cnt][n][j] = min(dp[cnt][n][j], dp[cnt-1][i][j] + cost(i, n));
                    if(n != i)
                        dp[cnt][i][n] = min(dp[cnt][i][n], dp[cnt-1][i][j] + cost(j, n));
                }
            }
        }
        cnt++;
    }
    int mn = MAX;
    for(int i=0; i<=4; i++)
    {
        for(int j=0; j<=4; j++)
            mn = min(mn, dp[cnt-1][i][j]);
    }
    cout << mn;
}
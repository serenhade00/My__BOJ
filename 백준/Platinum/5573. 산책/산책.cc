#include <bits/stdc++.h>

using namespace std;

int h, w;
int num[1001][1001];
int dp[1001][1001]; // 1~n-1번째 경로 이용 시 {i, j}를 밟은 횟수

void solve(int x, int y) // n번째 경로 탐색
{
    if(x == h+1 || y == w+1)
    {
        cout << x << ' ' << y;
        return;
    }
    if(num[x][y] == 1)
        solve(x, y+1);
    else
        solve(x+1, y);
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> h >> w >> n;
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=w; j++)
            cin >> num[i][j];
    }
    dp[1][1] = n-1; // 시작점은 무조건 밟으므로 n-1.
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=w; j++)
        {
            if(num[i][j] == 1)
            {
                dp[i][j+1] += (dp[i][j]+1)/2; // 현 위치가 '오'면, 오른쪽은 ceil(dp[i][j]/2)
                dp[i+1][j] += dp[i][j]/2; // 현 위치가 '오'면, 아래쪽은 floor(dp[i][j]/2)
            }
            else
            {
                dp[i][j+1] += dp[i][j]/2; // 위와 반대
                dp[i+1][j] += (dp[i][j]+1)/2;
            }
        }
    }
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=w; j++) 
        {
            if(dp[i][j] % 2 == 0)  // 홀수면 원래대로 돌아오므로 놔둠
                continue;
            else
                num[i][j] ^= 1; // 짝수면 switch
        }
    }
    solve(1, 1);
}
#include <bits/stdc++.h>

using namespace std;

long long dp[31][31]; // [알약 한 개 수][알약 반 개 수]

long long solve(int w, int h)
{
    if (w < 0 || h < 0) 
        return 0;
	if (w == 0 && h == 0)
        return 1;

    long long &ret = dp[w][h];
	if (ret != -1) 
        return ret;

	return ret = (solve(w - 1, h + 1) + solve(w, h - 1));
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

	int n;
	cin >> n;
    while(n != 0)
    {
        memset(dp, -1, sizeof(dp));
        cout << solve(n, 0) << '\n';
        cin >> n;
    }
}
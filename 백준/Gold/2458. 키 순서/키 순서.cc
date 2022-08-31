#include <bits/stdc++.h>

using namespace std;

const int INF = 10000000;
int d[501][501];
int cnt[501];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, val;
	cin >> n >> m;
	for(int i=1; i<=n; i++)
		fill(d[i], d[i]+n+1, INF);

	for(int i=1; i<=m; i++)
	{
        int x, y;
		cin >> x >> y;
        d[x][y] = 1;
	}
	
	for(int k=1; k<=n; k++)
	{
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				d[i][j] = min(d[i][k]+d[k][j], d[i][j]);
			}
		}
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(d[i][j]==INF)
				continue;
			else
            {
                cnt[i]++, cnt[j]++;
            }
		}
	}
    int ans = 0;
    for(int i=1; i<=n; i++)
    {
        if(cnt[i] == n-1)
            ans++;
    }
    cout << ans;
}
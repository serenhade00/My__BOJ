#include <bits/stdc++.h>

using namespace std;

int house[1001][4];
int sum[1001][4];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=3; j++)
		{
			cin >> house[i][j];
		}
	}
	for(int i=1; i<=3; i++)
	{
		sum[1][i] = house[1][i];
	}
	for(int i=2; i<=n; i++)
	{
		sum[i][1] = min(sum[i-1][2], sum[i-1][3])+house[i][1];
		sum[i][2] = min(sum[i-1][1], sum[i-1][3])+house[i][2];
		sum[i][3] = min(sum[i-1][1], sum[i-1][2])+house[i][3];
	}
	cout << min(min(sum[n][1], sum[n][2]),sum[n][3]);
}
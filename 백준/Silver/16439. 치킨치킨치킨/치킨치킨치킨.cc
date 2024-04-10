#include <bits/stdc++.h>

using namespace std;

int num[31][31];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, ans = 0;
	cin >> n >> m;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
			cin >> num[i][j];
	}
	for(int i=1; i<=m; i++)
	{
		for(int j=1; j<=m; j++)
		{
			for(int k=1; k<=m; k++)
			{
				int tmp = 0, cur;
		        for(int l=1; l<=n; l++)
		        {
		        	cur = max({num[l][i], num[l][j], num[l][k]});
		        	tmp += cur;
		        }
		        ans = max(ans, tmp);
			}
		}
	}
	cout << ans;
}
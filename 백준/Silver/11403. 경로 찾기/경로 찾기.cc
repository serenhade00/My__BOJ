#include <bits/stdc++.h>

using namespace std;

const int INF = 10000000;
int d[101][101];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, val;
	cin >> n;
	for(int i=1; i<=n; i++)
		fill(d[i], d[i]+n+1, INF);

	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
        {
            cin >> val;
            if(val == 0)
                continue;
            else
                d[i][j] = 1;
        }
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
				cout << 0 << ' ';
			else
				cout << 1 << ' ';
		}
			
		cout << '\n';
	}
}
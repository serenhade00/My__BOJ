#include <bits/stdc++.h>

using namespace std;

int num[1001][1001];
int mx[1001];

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
			cin >> num[i][j];
		mx[i] = *max_element(num[i], num[i]+m);
	}
	for(int j=0; j<m; j++)
	{
		int cnt = 0;
		for(int i=0; i<n; i++)
		{
			if(num[i][j] != mx[i])
				cnt++;
		}
		cout << cnt << ' ';
	}
}
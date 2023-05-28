#include <bits/stdc++.h>

using namespace std;

char arr[15][15];

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	for (int i = 0; i < n; i++) {
		for (int j = m - 1; j >= 0; j--)
			cout << arr[i][j];
		cout << '\n';
	}
}
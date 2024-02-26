#include <bits/stdc++.h>

using namespace std;
int main() {
	int n, m; 
	cin >> n >> m;
	for (int i = 0; i < m - 1; i++) {
		cout << i + 1 << '\n';
	}
	cout << n - (m * (m - 1) / 2) << '\n';
}

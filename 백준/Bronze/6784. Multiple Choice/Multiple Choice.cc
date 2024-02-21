#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char arr[100000];
int main() {
	fastio;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		char c;
		cin >> c;
		if (arr[i] == c) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
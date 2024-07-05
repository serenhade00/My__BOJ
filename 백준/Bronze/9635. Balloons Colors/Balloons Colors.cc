#include <bits/stdc++.h>

using namespace std;
int arr[101];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		memset(arr, 0, sizeof(arr));
		int n, x, y;
		cin >> n >> x >> y;
		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
		}
		bool flag1 = 0, flag2 = 0;
		if (arr[1] == x) {
			flag1 = 1;
		}
		if (arr[n] == y) {
			flag2 = 1;
		}
		if (flag1 && flag2) {
			cout << "BOTH\n";
		}
		else if (flag1 && !flag2) {
			cout << "EASY\n";
		}
		else if (!flag1 && flag2) {
			cout << "HARD\n";
		}
		else {
			cout << "OKAY\n";
		}
	}
}
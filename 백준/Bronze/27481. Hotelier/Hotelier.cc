#include <bits/stdc++.h>
using namespace std;

int n;
string s;
string ans = "0000000000";

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> s;
	for (auto& l : s) {
		if (l == 'L') {
			for (int i = 0; i < 10; i++) {
				if (ans[i] == '0') {
					ans[i] = '1';
					break;
				}
			}
		}
		else if (l == 'R') {
			for (int i = 9; i > -1; i--) {
				if (ans[i] == '0') {
					ans[i] = '1';
					break;
				}
			}
		}
		else ans[l - '0'] = '0';
	}
	cout << ans;
}
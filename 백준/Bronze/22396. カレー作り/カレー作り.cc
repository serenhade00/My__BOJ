#include <bits/stdc++.h>

using namespace std;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int r0, w0, c, r;
	while (cin >> r0 >> w0 >> c >> r && r0) {
		for (int i = 0;; ++i) {
			if (r0 + r * i >= c * w0) {
				cout << i << "\n";
				break;
			}
		}
	}
	return 0;
}
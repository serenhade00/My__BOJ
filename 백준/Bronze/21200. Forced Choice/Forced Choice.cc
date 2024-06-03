#include <bits/stdc++.h>

using namespace std;
int main() {
	int n, p, s;
	cin >> n >> p >> s;
	while (s--) {
		int m;
		cin >> m;
		bool f = 0;
		while (m--) {
			int n;
			cin >> n;
			if (n == p) {
				f = 1;
			}
		}
		cout << (f ? "KEEP" : "REMOVE") << "\n";
	}
}
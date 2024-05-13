#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

    int t, e, n;
	cin >> t;
	while (t--) {
		cin >> e >> n;
		int cnt = 0;
		while (n--) {
			int x; cin >> x;
			if (x > e) cnt++;
		}
		cout << cnt << '\n';
	}
}
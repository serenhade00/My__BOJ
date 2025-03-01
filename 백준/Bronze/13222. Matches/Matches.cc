#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, x, y; cin >> N >> x >> y;
	x = x * x + y * y;
	while (N--) {
		int k; cin >> k;
		if (k * k <= x) cout << "YES\n";
		else cout << "NO\n";
	}
}
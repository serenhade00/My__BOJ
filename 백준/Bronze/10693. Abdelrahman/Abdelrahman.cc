#include <iostream>
using namespace std;

int T;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> T;
	for (int t = 1; t <= T; t++) {
		int x, y; cin >> x >> y;
		cout << "Case " << t << ": " << y - x + 1 << '\n';
	}
}
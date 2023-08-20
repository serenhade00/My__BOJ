#include <iostream>
#include <utility>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

    int t;
	cin >> t;
	while(t--) {
		int x, y, n; cin >> x >> y >> n;
		cout << "Data set: " << x << ' ' << y << ' ' << n << '\n';
		if (x < y) swap(x, y);
		while (n--) {
			x >>= 1;
			if (x < y) swap(x, y);
		}
		cout << x << ' ' << y << '\n' << '\n';
	}
}
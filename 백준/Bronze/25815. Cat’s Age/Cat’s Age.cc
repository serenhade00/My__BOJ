#include <iostream>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	int m = a * 12 + b;
	int ans = 0;

	if (m >= 12) ans += 180, m -= 12;
	else {
		ans += 15 * m;
		m = 0;
	}
	if (m >= 12) ans += 108, m -= 12;
	else {
		ans += 9 * m;
		m = 0;
	}
	ans += 4 * m;
	cout << ans / 12 << ' ' << ans % 12;
}
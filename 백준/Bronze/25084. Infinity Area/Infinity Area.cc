#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
typedef long double ld;

ld PI = acos(-1);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cout << fixed;
	cout.precision(10);

	int T; cin >> T;
	for (int t = 1; t <= T; t++) {
		ld ans = 0;
		ll R, A, B; cin >> R >> A >> B;
		while (R) {
			ans += PI * R * R;
			R *= A;
			ans += PI * R * R;
			R /= B;
		}

		cout << "Case #" << t << ": " << ans << '\n';
	}
}
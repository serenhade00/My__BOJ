#include <iostream>
using namespace std;
typedef long long ll;

ll T, X, Y;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> T >> X >> Y;
	while (T--) {
		ll x; cin >> x;
		cout << x * Y / X << '\n';
	}
}
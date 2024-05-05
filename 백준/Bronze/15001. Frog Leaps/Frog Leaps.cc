#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    ll old, ans = 0;
	cin >> n >> old; n--;
	while (n--) {
		ll x; cin >> x;
		ans += (x - old) * (x - old);
		old = x;
	}
	cout << ans;
}
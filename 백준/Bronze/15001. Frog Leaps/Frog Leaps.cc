#include <iostream>
using namespace std;
typedef long long ll;

int main() {
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
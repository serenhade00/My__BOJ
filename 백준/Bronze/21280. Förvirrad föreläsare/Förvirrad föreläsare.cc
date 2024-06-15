#include <iostream>
using namespace std;

int N, prv;
int ans1, ans2;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> prv; N--;
	while (N--) {
		int x; cin >> x;
		if (x < prv) ans1 += prv - x;
		else ans2 += x - prv;
		prv = x;
	}

	cout << ans1 << ' ' << ans2;
}
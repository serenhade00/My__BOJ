#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int mn = 0;
	int cur = 0;
	int n; cin >> n;
	while (n--) {
		int x; cin >> x;
		cur += x;
		mn = min(mn, cur);
	}
	cout << -mn;
}
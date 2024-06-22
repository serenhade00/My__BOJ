#include <iostream>
using namespace std;

int N;
int old, ans;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> old; N--;
	while (N--) {
		int cur; cin >> cur;
		if (cur > old) ans++;
		old = cur;
	}
	cout << ans;
}
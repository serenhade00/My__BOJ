#include <iostream>
using namespace std;

int T, N;
int A1, B1, A2, B2;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> N;

		int ans = 0;
		if (N == 1) cin >> A1 >> B1;
		else {
			cin >> A1 >> B1 >> A2 >> B2;
			if ((A1 - A2) * (B1 - B2) < 0) ans = 1;
		}
		cout << "Case #" << t << ": " << ans << '\n';
	}
}
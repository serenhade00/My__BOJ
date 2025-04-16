#include <iostream>
using namespace std;

int T;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> T;
	for (int t = 1; t <= T; t++) {
		int A, B, K; cin >> A >> B >> K;
		int ans = 0;
		for (int a = 0; a < A; a++) {
			for (int b = 0; b < B; b++) {
				if ((a & b) < K) ans++;
			}
		}
		cout << "Case #" << t << ": " << ans << '\n';
	}
}
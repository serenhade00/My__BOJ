#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n;
	cin >> n;
	while (n--) {
		double p, c;
		cin >> p >> c;
		cout << fixed << setprecision(5) << 100 * p / (c + 100) << "\n";
	}
}
#include <bits/stdc++.h>

using namespace std;
int main() {
	int n;
	cin >> n;
	while (n--) {
		double p, c;
		cin >> p >> c;
		cout << fixed << setprecision(5) << 100 * p / (c + 100) << "\n";
	}
}
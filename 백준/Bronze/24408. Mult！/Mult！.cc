#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	int f; cin >> f;
	for (int i = 1; i < t; i++) {
		int x; cin >> x;
		if (x % f == 0) {
			cout << x << '\n';
			i++;
			if (i < t) cin >> f;
		}
	}
}
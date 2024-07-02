#include <iostream>
using namespace std;

int n;
int total;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	total = n * (n + 1);
	for (int i = 1; i < n * 2; i++) {
		int x; cin >> x;
		total -= x;
	}
	cout << total;
}
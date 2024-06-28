#include <iostream>
using namespace std;

int n, m;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	cout << min(n, m) * 2 + ((n + m) & 1);
}
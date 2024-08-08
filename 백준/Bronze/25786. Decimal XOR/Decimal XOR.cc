#include <iostream>
#include <stack>
using namespace std;

stack<int> s;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int X, Y; cin >> X >> Y;
	if (X == 0 && Y == 0) cout << 0;
	else {
		while (X || Y) {
			int x = X % 10, y = Y % 10;
			if ((x <= 2 && y <= 2) || (x >= 7 && y >= 7)) s.push(0);
			else s.push(9);

			X /= 10, Y /= 10;
		}

		while (!s.empty()) {
			cout << s.top();
			s.pop();
		}
	}
}
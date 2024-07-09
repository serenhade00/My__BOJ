#include <bits/stdc++.h>

using namespace std;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		int a = stoi(s.substr(0, 2));
		int b = stoi(s.substr(2, 4));
		if ((a * a + b * b) % 7 == 1) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}
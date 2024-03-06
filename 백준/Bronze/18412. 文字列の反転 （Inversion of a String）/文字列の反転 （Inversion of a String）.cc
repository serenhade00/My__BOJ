#include <bits/stdc++.h>

using namespace std;
int main() {
	int n, a, b;
	string s, s1;
	cin >> n >> a >> b >> s;
	if (a != b) {
		for (int i = a - 1; i < b; i++) {
			s1 += s[i];
		}
		reverse(s1.begin(), s1.end());
		s.replace(a - 1, b - a + 1, s1);
	}
	cout << s;
}
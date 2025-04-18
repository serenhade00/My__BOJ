#include <iostream>
#include <string>
using namespace std;

int slen;
string s;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> slen >> s;
	for (int i = 1; i < slen; i++) {
		if (s[i] == s[i - 1]) s[i - 1] += 'A' - 'a', s[i] += 'A' - 'a';
	}
	cout << s;
}
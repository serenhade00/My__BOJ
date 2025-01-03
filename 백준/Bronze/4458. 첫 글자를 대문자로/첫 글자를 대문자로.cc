#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();

	string ch;
	for (int i = 0; i < n; i++) {
		getline(cin, ch);
		if (ch[0] >= 'a' && ch[0] <= 'z') {
			ch[0] -= 32;
		}
		cout << ch << '\n';
	}
}
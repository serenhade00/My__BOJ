#include<iostream>
#include<string>
using namespace std;

void score(int n, string s) {
	if (n >= 97)
		cout << s << " A+" << '\n';
	else if (n >= 90)
		cout << s << " A" << '\n';
	else if (n >= 87)
		cout << s << " B+" << '\n';
	else if (n >= 80)
		cout << s << " B" << '\n';
	else if (n >= 77)
		cout << s << " C+" << '\n';
	else if (n >= 70)
		cout << s << " C" << '\n';
	else if (n >= 67)
		cout << s << " D+" << '\n';
	else if (n >= 60)
		cout << s << " D" << '\n';
	else
		cout << s << " F" << '\n';
}
int main() {
	int t, n;
	string s;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> s >> n;
		score(n,s);
	}
}
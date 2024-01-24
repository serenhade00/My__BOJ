#include <bits/stdc++.h>

using namespace std;
int main() {
	int n;
	cin >> n;
	if (n % 2 == 1) {
		cout << "Either";
	}
	else if (n % 4 == 2) {
		cout << "Odd";
	}
	else if (n % 4 == 0) {
		cout << "Even";
	}
}
#include<iostream>
using namespace std;
int main() {
	double c, s = 0, a, b, l;
	cin >> c >> l;
	for (int i = 0; i < l; i++) {
		cin >> a >> b;
		s = s + (a * b * c);
	}
	cout << fixed;
	cout.precision(6);
	cout << s;
}
#include<iostream>
using namespace std;
int main() {
	int t, tmp;
	double s = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> tmp;
		if (tmp == 0)
			s += 2;
		else if (tmp == 1)
			s += 1;
		else if (tmp == 2)
			s += (double)1 / 2;
		else if (tmp == 4)
			s += (double)1 / 4;
		else if (tmp == 8)
			s += (double)1 / 8;
		else if (tmp == 16)
			s += (double)1/16;
	}
	cout << fixed;
	cout.precision(6);
	cout << s;
}
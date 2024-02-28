#include<iostream>
using namespace std;
int a[10000];
int main() {
	int t1, t2, s=2;
	cin >> t1 >> t2;
	a[0] = t1;
	a[1] = t2;
	for (int i = 2; i < 10000; i++) {
		a[i] = a[i - 2] - a[i - 1];
		s++;
		if (a[i] < 0) {
			cout << s-1 << '\n';
			break;
		}
	}
}
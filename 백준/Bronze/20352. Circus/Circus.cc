#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double x, p = 3.141592653589;
	cin >> x;
	cout << fixed;
	cout.precision(10);
	cout << sqrt(x / p) * 2 * p;
}
#include <iostream>
using namespace std;

int main()
{
	double a, b, c, d;

	cin >> a >> b >> c >> d;

	double x = a / c + b / d;
	double y = c / d + a / b;
	double z = d / b + c / a;
	double q = b / a + d / c;

	if (x >= y && x >= z && x >= q)
		cout << 0;
	else if (y >= x && y >= z && y >= q)
		cout << 1;
	else if (z >= x && z >= y && z >= q)
		cout << 2;
	else if (q >= x && q >= y && q >= z)
		cout << 3;
}
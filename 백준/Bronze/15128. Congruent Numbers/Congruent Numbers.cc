#include <iostream>

using namespace std;

int main()
{
	long long p1 = 0;
	long long q1 = 0;
	long long p2 = 0;
	long long q2 = 0;
	long long remainder = 0;

	cin >> p1 >> q1 >> p2 >> q2;

	remainder = (p1 * p2) % (2 * q1 * q2);

	if (remainder)
		cout << 0;
	else
		cout << 1;
}
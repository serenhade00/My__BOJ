#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	int ans = 1;

	if (a % 2 == 1 || b % 2 == 1 || c % 2 == 1)
	{
		if (a % 2 == 1) ans *= a;
		if (b % 2 == 1) ans *= b;
		if (c % 2 == 1) ans *= c;
	}
	else ans = a * b * c;
	cout << ans;
}
#include <bits/stdc++.h>

using namespace std;

int main(void) 
{
	int a, b, c, d, e, min=0;
	cin >> a >> b >> c >> d >> e;
	if (a < 0) 
    {
		min += abs(a) * c + d;
		a = 0;
	}
	min += (b - a) * e;

	cout << min;
}
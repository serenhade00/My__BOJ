#include <iostream>

using namespace std;

int main() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c;
	d = b*2+c*4;
	e = a*2+c*2;
	f = a*4+b*2;
	if (d <= e && d <= f)
        cout << d;
	else if (e <= d && e <= f)
        cout << e;
	else cout << f;
}
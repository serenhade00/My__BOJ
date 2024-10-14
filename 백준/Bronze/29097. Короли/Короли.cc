#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d, e, f, x, y, z, mx;

    cin >> a >> b >> c >> d >> e >> f;
    x = a * d; y = b * e; z = c * f;

    mx = max({ x,y,z });
    if (x == mx) cout << "Joffrey ";
    if (y == mx) cout << "Robb ";
    if (z == mx) cout << "Stannis";
}
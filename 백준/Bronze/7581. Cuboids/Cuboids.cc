#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    ll a, b, c, d;
    while (true)
    {
        cin >> a >> b >> c >> d;
        if (a == 0 && b == 0 && c == 0 && d == 0) break;
        if (a == 0) a = d / b / c;
        if (b == 0) b = d / a / c;
        if (c == 0) c = d / a / b;
        if (d == 0) d = a * b * c;
        cout << a << ' ' << b << ' ' << c << ' ' << d << "\n";
    }
}
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll a, b, c, d;
    char x;

    while (true)
    {
        cin >> a >> x >> b;
        cin >> c >> x >> d;
        if (!a && !b && !c && !d) break;

        a += c;
        b += d;
        a += b / 60; b %= 60;
        ll plus = a / 24;
        a %= 24;

        cout << a / 10 << a % 10 << ':' << b / 10 << b % 10;
        if (plus) cout << " +" << plus;
        cout << "\n";
    }
}
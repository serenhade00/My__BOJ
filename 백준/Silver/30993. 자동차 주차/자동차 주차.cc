#include <iostream>
#define ll long long
using namespace std;

ll fact(ll x)
{
    if (x == 0) return 1;
    return x * fact(x - 1);
}
int main(void)
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << fact(a) / fact(b) / fact(c) / fact(d);
}
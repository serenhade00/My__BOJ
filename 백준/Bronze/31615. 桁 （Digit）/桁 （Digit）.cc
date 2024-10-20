#include <iostream>
#define ll long long
using namespace std;

ll cnt(ll x)
{
    if (!x) return 0;
    return cnt(x / 10) + 1;
}

int main()
{
    ll a, b;
    cin >> a >> b;
    cout << cnt(a + b);
}
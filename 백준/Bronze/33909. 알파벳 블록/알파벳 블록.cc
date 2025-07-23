#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll a, b, c, d;

    cin >> a >> b >> c >> d;
    a += d; b += 2 * c;

    cout << min(a / 3, b / 6);
}
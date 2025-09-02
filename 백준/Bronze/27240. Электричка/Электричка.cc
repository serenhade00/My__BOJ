#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll a, b, c, s, t;

    cin >> a >> b >> c >> s >> t;
    ll mn = min(s, t), mx = max(s, t);
    s = mn; t = mx;

    if (b < s && t < c) cout << "City";
    else if (t <= b || c <= s) cout << "Outside";
    else cout << "Full";
}
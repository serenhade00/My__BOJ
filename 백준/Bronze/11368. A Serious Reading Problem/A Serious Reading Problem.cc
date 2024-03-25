#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll solve(ll x, ll n) {
    ll tmp = 1;
    while (n) {
        if (n & 1) {
            tmp *= x;
        }
        x *= x;
        n >>= 1;
    }
    return tmp;
}

int main() {
    ll a, b, c, d;
    while (cin >> a >> b >> c >> d && (a || b || c || d)) {
        cout << solve(a, b * c * d) << '\n';
    }
}
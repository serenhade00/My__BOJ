#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    ll N, a, b, c;

    while (1)
    {
        cin >> N;
        if (N == 0) break;

        cin >> a >> b >> c;
        if (2 * b == a + c)
        {
            ll d = b - a;
            cout << N * (2 * a + (N - 1) * d) / 2 << "\n";
        }
        else
        {
            ll r = b / a;
            cout << (ll)(a * (pow(r, N) - 1) / (r - 1)) << "\n";
        }
    }
}
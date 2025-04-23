#include <iostream>
#define ll long long
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll a, b, c, d, e, f, mx = 0, ans = 0;

    cin >> a >> b >> c >> d >> e >> f;
    if (a >= mx)
    {
        mx = a;
        ans = 1;
    }
    if (b * 5 >= mx)
    {
        mx = b * 5;
        ans = 5;
    }
    if (c * 10 >= mx)
    {
        mx = c * 10;
        ans = 10;
    }
    if (d * 20 >= mx)
    {
        mx = d * 20;
        ans = 20;
    }
    if (e * 50 >= mx)
    {
        mx = e * 50;
        ans = 50;
    }
    if (f * 100 >= mx)
    {
        mx = f * 100;
        ans = 100;
    }
    cout << ans;
}
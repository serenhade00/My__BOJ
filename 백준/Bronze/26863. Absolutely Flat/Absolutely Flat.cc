#include <iostream>
#define ll long long
using namespace std;


int main(void)
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll x, mn = 2e9, mx = 0, mxcnt = 0, i;

    for (i = 0; i < 4; i++)
    {
        cin >> x;
        if (x < mn) mn = x;
        if (x > mx)
        {
            mx = x;
            mxcnt = 0;
        }
        if (x == mx) mxcnt++;
    }

    cin >> x;
    if (mxcnt == 4 || (mxcnt == 3 && mn + x == mx)) cout << 1;
    else cout << 0;
}
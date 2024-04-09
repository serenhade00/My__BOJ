#include <iostream>
#define ll long long
using namespace std;

int main(void)
{
    ll k, t, s, f = 0, mx = 0, tf = 0, sf = 0;
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> t >> s;
        if (s > mx)
        {
            mx = s;
            f = i;
            tf = t;
            sf = s;
        }
    }
    if (sf == 0) cout << 0;
    else cout << tf + (f - 1) * 20;
}
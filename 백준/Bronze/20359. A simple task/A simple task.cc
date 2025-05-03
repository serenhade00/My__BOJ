#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll x, cnt = 0;
    cin >> x;
    while (x % 2 == 0)
    {
        cnt++;
        x /= 2;
    }
    cout << x << ' ' << cnt;
}
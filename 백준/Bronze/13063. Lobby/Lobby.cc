#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll a, b, c;
    while (true)
    {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) break;
        if (a - (a / 2 + 1) < c) cout << "-1\n";
        else cout << max((ll)(0), a / 2 + 1 - b) << "\n";
    }
}
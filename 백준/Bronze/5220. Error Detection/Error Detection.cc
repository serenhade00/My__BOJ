#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll solve(ll x)
{
    if (x <= 1) return x;
    return (x + solve(x / 2)) % 2;
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    ll T, N, x;

    cin >> T;
    while (T--)
    {
        cin >> N >> x;
        if (x == solve(N)) cout << "Valid\n";
        else cout << "Corrupt\n";
    }
}
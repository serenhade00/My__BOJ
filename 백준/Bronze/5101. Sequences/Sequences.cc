#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    ll a, b, c;
    while (true)
    {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) break;
        if ((c - a) * b < 0) cout << "X\n";
        else
        {
            if ((c - a) % b == 0) cout << (c - a) / b + 1 << "\n";
            else cout << "X\n";
        }
    }
}
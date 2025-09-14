#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll T;
    string s;

    cin >> T;
    while (T--)
    {
        cin >> s;
        ll sum = 0;
        for (char c : s)
            sum += c - '0';
        if (sum % 9 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}
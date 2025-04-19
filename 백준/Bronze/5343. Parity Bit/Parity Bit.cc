#include <iostream>
#include <string>
#define ll long long
using namespace std;

bool wrong(string s)
{
    ll sum = 0;
    for (ll i = 0; i < 7; i++)
        sum += s[i] - '0';
    if (sum % 2 != (s[7] - '0') % 2) return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll T, i;
    string s;
    
    cin >> T;
    while (T--)
    {
        cin >> s;
        ll cnt = 0;
        for (i = 0; i < s.length() / 8; i++)
            if (wrong(s.substr(i * 8, 8)))
                cnt++;
        cout << cnt << "\n";
    }
}
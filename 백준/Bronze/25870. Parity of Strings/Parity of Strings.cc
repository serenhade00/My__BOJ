#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    string s;
    cin >> s;

    ll ck[26] = { 0 }, last = -1;
    for (char c : s)
        ck[c - 'a']++;

    for (ll i = 0; i < 26; i++)
    {
        if (ck[i] == 0) continue;
        if (last != -1 && ck[i] % 2 != ck[last] % 2)
        {
            cout << 2;
            return 0;
        }
        last = i;
    }
    cout << ck[last] % 2;
}
#include <iostream>
#include <string>
#define ll long long
using namespace std;

ll CNT(string s, string target)
{
    ll cnt = 0;
    for (ll i = 0; i + target.length() <= s.length(); i++)
        if (s.substr(i, target.length()) == target)
            cnt++;
    return cnt;
}

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    string s, target;

    cin >> target;
    cin.ignore();

    ll cnt = 0;
    while (cin >> s)
        cnt += CNT(s, target);
    cout << cnt;
}
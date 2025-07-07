#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll len, i, cnt = 0;
    string s;

    cin >> len >> s;
    for (i = 0; i < len; i++)
    {
        if (s[i] == 'O')
            cnt++;
    }

    if (cnt * 2 >= len) cout << "Yes";
    else cout << "No";
}
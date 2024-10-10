#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    ll len, i;
    string s;

    cin >> len >> s;
    for (i = 1; i < len; i++)
    {
        if (s[i] != s[0])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}
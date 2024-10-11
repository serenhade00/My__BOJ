#include <iostream>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    ll len, updown = 0, leftright = 0;
    string s;

    cin >> len >> s;
    for (ll i = 0; i < len; i++)
    {
        if (s[i] == 'N') updown++;
        else if (s[i] == 'S') updown--;
        else if (s[i] == 'W') leftright++;
        else leftright--;
    }
    cout << abs(updown) + abs(leftright);
}
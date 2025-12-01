#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;
    cin >> s;
    if(s[0] == 'F')
        cout << "Foundation";
    else if(s[0] == 'C')
        cout << "Claves";
    else if(s[0] == 'V')
        cout << "Veritas";
    else
        cout << "Exploration";
}
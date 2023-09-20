#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t, a = 0, b = 0;
    string s;
    cin >> t >> s;
    for(int i=0; i<t; i++)
    {
        if(s[i] == 'A')
            a++;
        else
            b++;
    }
    if(a > b)
        cout << "A";
    else if(a == b)
        cout << "Tie";
    else
        cout << "B";
}
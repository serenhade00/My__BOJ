#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s, tmp;
    cin >> s;
    int len = s.size();
    len -= 2;
    cout << "h";
    len *= 2;
    for(int i=0; i<len; i++)
        cout << 'e';
    cout << "y";
}
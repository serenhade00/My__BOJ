#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;
    cin >> s;
    int len = s.size();
    cout << s.substr(0, len/2) << ' ' << s.substr(len/2);
}
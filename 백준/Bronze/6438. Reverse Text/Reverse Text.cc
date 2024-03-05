#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    cin.ignore();
    for(int i=0; i<t; i++)
    {
        string s;
        getline(cin, s);
        reverse(s.begin(), s.end());
        cout << s << '\n';
    }
}
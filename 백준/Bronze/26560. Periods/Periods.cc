#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    string s;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        getline(cin, s);
        cout << s;
        if(s.back() != '.')
        	cout << '.';
        cout << '\n';
    }
}
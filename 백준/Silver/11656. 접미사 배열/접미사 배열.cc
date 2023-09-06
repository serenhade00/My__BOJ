#include <bits/stdc++.h>

using namespace std;

set<string> s;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string a;
    cin >> a;
    int len = a.size();
    for(int i=0; i<len; i++)
        s.insert(a.substr(i, len));
    for(auto cur : s)
        cout << cur << '\n';
}
#include <bits/stdc++.h>

using namespace std;

map<string, int> m;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int cnt = 0;
    string s;
    while (getline(cin, s)) {
        m[s]++;
        cnt++;
    }
    
    cout << fixed;
    cout.precision(4);
    
    for(auto x : m)
        cout << x.first << ' ' << (double)x.second*100 / cnt << '\n'; 
}
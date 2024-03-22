#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int c, d, ans;
        string a, b, last;
        cin >> a >> b;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        c = stoi(a), d = stoi(b);
        ans = c+d;
        last = to_string(ans);
        reverse(last.begin(), last.end());
        cout << stoi(last) << '\n';
    }
}
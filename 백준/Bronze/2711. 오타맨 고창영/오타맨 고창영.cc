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
        int num;
        string s, ans;
        cin >> num >> s;
        
        ans = s.substr(0, num-1) + s.substr(num);
        cout << ans << '\n';
    }
}
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, ans = 0;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        string s;
        cin >> s;
        int len = s.size();
        for(int j=0; j<len; j++)
        {
            if(s[j]=='A') ans += 4;
            else if(s[j]=='K') ans += 3;
            else if(s[j]=='Q') ans += 2;
            else if(s[j]=='J') ans += 1;
        }
    }
    cout << ans;
}
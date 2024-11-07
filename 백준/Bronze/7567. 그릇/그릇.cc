#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int ans = 10;
    string s;
    cin >> s;
    int len = s.size();
    for(int i=1; i<len; i++)
    {
        if(s[i-1] != s[i])
            ans += 10;
        else
            ans += 5;
    }
    cout << ans;
}
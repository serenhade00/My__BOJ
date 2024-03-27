#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t, ans = 0;
    cin >> t;
    string s1, s2;
    cin >> s1 >> s2;
    for(int i=0; i<t; i++)
    {
        if(s1[i] == s2[i])
            ans++;
    }
    cout << ans;
}
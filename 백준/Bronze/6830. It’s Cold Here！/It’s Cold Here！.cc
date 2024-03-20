#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int tmp, mn = 201;
    string s, ans;
    while(1)
    {
        cin >> s >> tmp;
        if(tmp < mn)
        {
            mn = tmp;
            ans = s;
        }
        if(s == "Waterloo")
            break;
    }
    cout << ans;
}
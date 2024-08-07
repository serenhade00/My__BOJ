#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s, ans;
    cin >> s;
    for(auto e : s)
    {
        if(e >= 65 && e <= 96)
            ans += e;
    }
    cout << ans;
}
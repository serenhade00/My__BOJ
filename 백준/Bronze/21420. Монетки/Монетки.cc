#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t, ans = 0, val;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> val;
        if(!val) ans++;
    }
    cout << min(ans, t-ans);
}
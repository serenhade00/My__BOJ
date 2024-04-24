#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t, ans;
    cin >> t;
    ans = t;
    for(int i=0; i<t; i++)
    {
        int a, b;
        cin >> a >> b;
        if(a*5 - b*3 <= 40)
            ans--;
    }
    if(ans != t)
        cout << ans;
    else
        cout << t << '+';
}
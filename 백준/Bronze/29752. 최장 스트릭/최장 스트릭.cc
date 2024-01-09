#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, mx = 0, tmp = 0;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int val;
        cin >> val;
        if(val == 0)
        {
            mx = max(mx, tmp);
            tmp = 0;
        }
        else
            tmp++;
    }
    mx = max(mx, tmp);
    cout << mx;
}
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, val, cnt = 0;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> val;
        if(val != i)
            cnt++;
    }
    cout << cnt;
}

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, h, val, sum = 0;
    cin >> n >> h;
    for(int i=1; i<=n; i++)
    {
        cin >> val;
        sum += val;
        if(sum >= h)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
}
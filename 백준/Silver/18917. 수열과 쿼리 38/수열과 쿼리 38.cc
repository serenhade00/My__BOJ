#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int m, q;
    cin >> m;
    long long sum = 0, exor = 0, val;
    for(int i=0; i<m; i++)
    {
        cin >> q;
        if(q == 1)
        {
            cin >> val;
            sum += val;
            exor ^= val;
        }
        if(q == 2)
        {
            cin >> val;
            sum -= val;
            exor ^= val;
        }
        if(q == 3)
            cout << sum << '\n';
        if(q == 4)
            cout << exor << '\n';
    }
}
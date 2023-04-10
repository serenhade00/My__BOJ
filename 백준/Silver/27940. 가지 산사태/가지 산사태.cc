#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, k;
    int sum = 0;
    cin >> n >> m >> k;
    for(int i=0; i<m; i++)
    {
        int t, r;
        cin >> t >> r;
        sum += r;
        if(sum > k)
        {
            cout << i+1 << ' ' << 1;
            return 0;
        }
    }
    cout << -1;
}
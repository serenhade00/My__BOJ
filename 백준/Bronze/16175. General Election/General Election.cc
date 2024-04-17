#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int k=0; k<t; k++)
    {
        int n, m, val, mx = 0, idx;
        cin >> n >> m;
        vector<int> a(n+1, 0);
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin >> val;
                a[j+1] += val;
            }
        }
        for(int i=1; i<=n; i++)
        {
            if(a[i] > mx)
            {
                mx = a[i];
                idx = i;
            }
        }
        cout << idx << '\n';
    }
}
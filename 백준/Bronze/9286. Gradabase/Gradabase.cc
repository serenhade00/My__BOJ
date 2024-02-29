#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        vector<int> v;
        int m, val;
        cin >> m;
        for(int j=0; j<m; j++)
        {
            cin >> val;
            if(val < 6)
                v.push_back(val+1);
        }
        cout << "Case " << i+1 << ":\n";
        for(auto e : v)
            cout << e << '\n';
    }
}
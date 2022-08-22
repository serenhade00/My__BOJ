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
        unordered_set<int> s1;
        int n, m, val;
        cin >> n;
        for(int j=0; j<n; j++)
        {
            cin >> val;
            s1.insert(val);
        }
        cin >> m;
        for(int j=0; j<m; j++)
        {
            cin >> val;
            if(s1.find(val) != s1.end())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
    }
}
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
        map<int,int> m;
        int n, val, ans;
        cin >> n;
        for(int j=0; j<n; j++)
        {
            cin >> val;
            m[val]++;
        }
        for(auto e : m)
        {
            if(e.second != 2)
            {
                cout << "Case #" << i+1 << ": " << e.first << '\n';
                break;
            }
        }
    }
}
#include <bits/stdc++.h>

using namespace std;

set<int> a, b;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, val;
    cin >> n >> m;
    
    for(int i=0; i<n; i++)
    {
        cin >> val;
        a.insert(val);
    }
    for(int i=0; i<m; i++)
    {
        cin >> val;
        b.insert(val);
    }
    vector<int> ans;
    for(auto x : a)
    {
        if(b.find(x) == b.end())
        {
            ans.push_back(x);
        }
    }
    cout << ans.size() << '\n';
    for(auto x : ans)
        cout << x << ' ';
}
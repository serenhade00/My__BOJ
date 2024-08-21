#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> v;
    int t, val;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());
    for(auto e : v)
        cout << e << '\n';
}
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> num;
    int t, val;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> val;
        num.push_back(val);
    }
    sort(num.begin(), num.end());
    for(auto e : num)
        cout << e << ' ';
}
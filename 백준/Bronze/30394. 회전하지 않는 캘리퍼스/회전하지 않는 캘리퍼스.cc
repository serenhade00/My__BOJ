#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> v;
    int n, a, b;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        v.push_back(b);
    }
    sort(v.begin(), v.end());
    cout << v[n-1] - v[0];
}
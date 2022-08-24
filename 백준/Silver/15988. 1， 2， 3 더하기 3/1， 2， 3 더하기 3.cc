#include <bits/stdc++.h>
#define MAX 1000000009
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, val;
    cin >> t;
    vector<int> v1;
    for(int i=0; i<t; i++)
    {
        cin >> val;
        v1.push_back(val);
    }
    int mx = *max_element(v1.begin(), v1.end());
    vector<long long> v2(mx+1);
    v2[1] = 1;
    v2[2] = 2;
    v2[3] = 4;
    for(int i=4; i<=mx; i++)
    {
        v2[i] = (v2[i-1]+v2[i-2]+v2[i-3]) % MAX;
    }
    for(int i=0; i<t; i++)
    {
        cout << v2[v1[i]] << '\n';
    }
}
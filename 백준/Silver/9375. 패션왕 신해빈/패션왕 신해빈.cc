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
        map<string, int> m;
        int n;
        long long cnt = 1;
        cin >> n;
        for(int j=0; j<n; j++)
        {
            string s1, s2;
            cin >> s1 >> s2;
            m[s2]++;
        }
        for(auto e : m)
            cnt *= (e.second+1);
        cout << cnt-1 << '\n';
    }
}
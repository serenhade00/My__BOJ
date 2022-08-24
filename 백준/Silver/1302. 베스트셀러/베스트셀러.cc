#include <bits/stdc++.h>

using namespace std;

map<string, int> m;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    int mx = 0;
    string ans;
    string s;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        m[s]++;
    }
    for(auto e : m)
    {
        if(e.second > mx)
        {
        	mx = e.second;
        	ans = e.first;
        }
    }
    cout << ans;
}
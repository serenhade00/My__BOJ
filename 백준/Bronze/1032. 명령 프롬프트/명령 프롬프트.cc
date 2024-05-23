#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    string s;
    cin >> t >> s;
    int len = s.size();
    vector<char> v(len);
    for(int j=0; j<len; j++)
        v[j] = s[j];
    
    for(int i=0; i<t-1; i++)
    {
        string s;
        cin >> s;
        for(int j=0; j<len; j++)
        {
            if(s[j] != v[j])
                v[j] = '?';
        }
            
    }
    for(auto e : v)
        cout << e;
}
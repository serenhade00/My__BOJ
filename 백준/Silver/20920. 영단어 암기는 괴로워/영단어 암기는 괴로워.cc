#include <bits/stdc++.h>

using namespace std;

unordered_map<string,int> m;
vector<string> v;

bool cmp(const string& s1, const string& s2)
{
    if(m[s1] != m[s2])
        return m[s1] > m[s2] ? true : false;
    if(s1.size() != s2.size())
        return s1.size() > s2.size() ? true : false;
    return s1 < s2;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    string s;
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        if(s.size() < k)
            continue;
        m[s]++;
        if(m[s] == 1)
        	v.push_back(s);
    }
    sort(v.begin(), v.end(), cmp);
    v.erase(unique(v.begin(),v.end()), v.end());
    for(auto e : v)
        cout << e << '\n';
}
#include <bits/stdc++.h>

using namespace std;

unordered_set<string> us;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        us.insert(s);
        reverse(s.begin(), s.end());
        if(us.find(s) != us.end())
        {
            cout << s.size() << ' ' << s[s.size()/2];
            return 0;
        }
        else
        	us.insert(s);
    }
}
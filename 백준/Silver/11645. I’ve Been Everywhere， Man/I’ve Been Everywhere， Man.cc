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
        int n;
        string tmp;
        set<string> s;
        cin >> n;
        for(int j=0; j<n; j++)
        {
            cin >> tmp;
            s.insert(tmp);
        }
        cout << s.size() << '\n';
    }
}
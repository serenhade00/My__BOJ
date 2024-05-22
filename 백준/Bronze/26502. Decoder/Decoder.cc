#include <bits/stdc++.h>

using namespace std;

map<char, char> m;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    m['a'] = 'e', m['e'] = 'i', m['i'] = 'o', m['o'] = 'u', m['u'] = 'y', m['y'] = 'a';
    m['A'] = 'E', m['E'] = 'I', m['I'] = 'O', m['O'] = 'U', m['U'] = 'Y', m['Y'] = 'A';
    int t;
    cin >> t;
    cin.ignore();
    for(int i=0; i<t; i++)
    {
        string s;
        getline(cin, s);
        for(auto e : s)
        {
            if(m.find(e) != m.end())
                cout << m[e];
            else
                cout << e;
        }
        cout << '\n';
    }
}
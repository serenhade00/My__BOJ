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
        string s;
        cin >> s;
        int len = s.size();
        cout << "String #" << i+1 << '\n';
        for(int j=0; j<len; j++)
        {
            if(s[j] == 'Z')
                cout << 'A';
            else
                cout << char(s[j]+1);
        }
        cout << '\n' << '\n';
    }
}
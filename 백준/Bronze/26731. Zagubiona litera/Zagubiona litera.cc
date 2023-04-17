#include <bits/stdc++.h>

using namespace std;

bool op[26];

int main(void)
{
    string s;
    cin >> s;
    
    for(int i=0; i<25; i++)
        op[s[i]-65] = 1;
    for(int i=0; i<26; i++)
    {
        if(!op[i])
            cout << (char)('A' + i);
    }
}
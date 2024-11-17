#include <bits/stdc++.h>

using namespace std;

string s[5];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int mx = 0;
    for(int i=0; i<5; i++)
    {
        cin >> s[i];
        int len = s[i].size();
        mx = max(mx, len);
    }
    for(int j=0; j<mx; j++)
    {
        for(int i=0; i<5; i++)
        {
            if(j < s[i].size())
                cout << s[i][j];
        }
    }
}
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int cnt = 0;
    string s;
    cin >> s;
    int len = s.size();
    for(int j=3; j<len; j++)
    {
        if(s[j-3] == 'k' && s[j-2] == 'i' && s[j-1] == 'c' && s[j] == 'k')
            cnt++;
    }
    cout << cnt;
}
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a = 0, b = 0;
    string s;
    cin >> s;
    int len = s.size();
    for(int i=1; i<len; i+=2)
    {
        if(s[i-1] == 'A')
            a += s[i] - '0';
        else
            b += s[i] - '0';
    }
    if(a > b)
        cout << 'A';
    else
        cout << 'B';
}
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;
    
    int cnt = 0;
    int len = s.size();
    
    for(int i=0; i<len; i++)
    {
        if(s[i] == ',')
            cnt++;
    }
    cout << cnt+1;
}
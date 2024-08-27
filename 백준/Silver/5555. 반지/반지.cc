#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    int t, cnt = 0;
    cin >> s >> t;
    for(int i=0; i<t; i++)
    {
        string tmp;
        cin >> tmp;
        tmp += tmp;
        if(tmp.find(s) != string::npos)
            cnt++;
    }
    cout << cnt;
}
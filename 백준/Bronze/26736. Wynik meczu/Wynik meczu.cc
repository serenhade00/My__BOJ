#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;
    cin >> s;
    int len = s.size();
    int a_cnt = 0, b_cnt = 0;
    
    for(int i=0; i<len; i++)
    {
        if(s[i] == 'A')
            a_cnt++;
        else
            b_cnt++;
    }
    cout << a_cnt << " : " << b_cnt;
}
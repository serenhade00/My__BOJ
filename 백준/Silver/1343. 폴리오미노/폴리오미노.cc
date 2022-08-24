#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;
    string ans;
    cin >> s;
    int len = s.size();
    int tmp = 0;
    for(int i=0; i<=len; i++)
    {
        if(s[i] == 'X')
            tmp++;
        else
        {
            if(tmp)
            {
                if(tmp % 4 == 2)
                {
                    for(int i=0; i<tmp/4; i++)
                        ans += "AAAA";
                    ans += "BB";
                    tmp = 0;
                }
                else if(tmp % 4 == 0)
                {
                    for(int i=0; i<tmp/4; i++)
                        ans += "AAAA";
                    tmp = 0;
                }
                else
                {
                    cout << -1;
                    return 0;
                }
            }
            if(i==len)
            	break;
            ans += s[i];
        }
    }
    cout << ans;
}
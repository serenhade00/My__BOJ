#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, l, mx = 0, cnt = 0;
    string s;
    cin >> n >> l;
    for(int i=0; i<n; i++)
    {
        int tmp = 0;
        bool op = 0;
        cin >> s;
        for(int j=0; j<l; j++)
        {
            if(s[j] == '1' && !op)
            {
                op = 1;
                tmp++;
            }
            else if(s[j] == '0')
                op = 0;
        }
        if(tmp > mx)
        {
            mx = tmp;
            cnt = 1;
        }
        else if(tmp == mx)
            cnt++;
    }
    cout << mx << ' ' << cnt;
}
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int mx = 0;
    string a, b;
    cin >> a >> b;
    
    int len1 = a.size(), len2 = b.size();
    for(int i=0; i<=len2-len1; i++)
    {
        int cnt = 0, a_idx = 0;
        for(int idx=i; idx<i+len1; idx++, a_idx++)
        {
            if(a[a_idx] == b[idx])
                cnt++;
        }
        mx = max(mx, cnt);
    }
    cout << len1 - mx;
}
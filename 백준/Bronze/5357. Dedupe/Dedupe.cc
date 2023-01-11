#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        string s, ans;
        cin >> s;
        
        int len = s.size();
        
        ans += s[0];
        for(int j=1; j<len; j++)
        {
            if(s[j] != s[j-1])
                ans += s[j];
        }
        cout << ans << '\n';
    }
}
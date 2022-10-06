#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    int cnt = 0;
    string s1, s2;
    cin >> s1 >> n;
    
    for(int i=0; i<n; i++)
    {
        cin >> s2;
        if(s2 == s1)
        {
            cnt++;
        }
    }
    cout << cnt;
}
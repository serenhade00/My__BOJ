#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    int n, cnt = 0;
    string s;
    cin >> n >> s;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            cnt++;
    }
    cout << cnt;
}
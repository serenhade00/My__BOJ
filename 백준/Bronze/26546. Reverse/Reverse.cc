#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string s;
        int a, b;
        cin >> s >> a >> b;
        int len = s.size();
        for(int j=0; j<len; j++)
        {
            if(j >= a && j <= b-1)
                continue;
            cout << s[j];
        }
        cout << '\n';
    }
}
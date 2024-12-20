#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, z = 0, o = 0;
    cin >> n >> m;
    string s;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        for(int j=0; j<m; j++)
        {
            if(s[j] == '0')
                z++;
            else
                o++;
        }
    }
    z <= o ? cout << z : cout << o;
}
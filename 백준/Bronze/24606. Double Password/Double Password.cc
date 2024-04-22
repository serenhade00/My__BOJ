#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string a, b;
    int ans = 1;
    cin >> a >> b;
    for(int i=0; i<4; i++)
    {
        if(a[i] != b[i])
            ans <<= 1;
    }
    cout << ans;
}
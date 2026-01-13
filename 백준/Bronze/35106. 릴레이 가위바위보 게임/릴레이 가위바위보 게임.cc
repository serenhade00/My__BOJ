#include <bits/stdc++.h>

using namespace std;

int num[4];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, val, mn, mx, a, b, len;
    cin >> n;
    len = 3*n;
    for(int i=0; i<len; i++)
    {
        cin >> val;
        num[val]++;
    }
    mn = 1002, mx = 0;
    for(int i=1; i<=3; i++)
    {
        if(num[i] < mn)
        {
            mn = num[i];
            a = i;
        }
        if(num[i] > mx)
        {
            mx = num[i];
            b = i;
        }
    }
    cout << a << '\n' << b;
}
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    while(n > 0)
    {
        if(n == 1)
            cout << 3;
        else
            cout << 1 << ' ' << 2 << ' ';
        n -= 2;
    }
 }
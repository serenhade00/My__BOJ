#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c, m;
    cin >> a >> b >> c >> m;
    
    int num = 24;
    int tired = 0;
    int sum = 0;
    while(num--)
    {
        if(tired + a <= m)
        {
            tired += a;
            sum += b;
        }
        else
        {
            tired -= c;
            if(tired < 0)
            	tired = 0;
        }
    }
    cout << sum;
}
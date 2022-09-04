#include <bits/stdc++.h>

using namespace std;

int fib[2000001];

int main(void)
{
    int n;
    cin >> n;
    fib[1000000] = 0;
    fib[1000001] = 1;
    for(int i=1000002; i<=2000000; i++)
    {
        fib[i] = (fib[i-1]+fib[i-2]) % 1000000000;
    }
    for(int i=999999; i>=0; i--)
    {
        fib[i] = (fib[i+2]-fib[i+1]) % 1000000000;
    }
    if(fib[n+1000000] < 0)
        cout << -1 << '\n';
    else if(fib[n+1000000] == 0)
        cout << 0 << '\n';
    else
        cout << 1 << '\n';
    
    cout << abs(fib[n+1000000]) % 1000000000;
}
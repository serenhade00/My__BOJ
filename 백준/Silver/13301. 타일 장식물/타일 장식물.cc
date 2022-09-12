#include <bits/stdc++.h>

using namespace std;

long long fib[85];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    fib[1] = 1;
    fib[2] = 1;
    
    int n;
    cin >> n;
    if(n == 1)
    {
        cout << 4;
        return 0;
    }
    else if(n == 2)
    {
        cout << 6;
        return 0;
    }
    for(int i=3; i<=n; i++)
        fib[i] = fib[i-1] + fib[i-2];
    
    cout << 2*(fib[n]+fib[n-1])+2*(fib[n-1]+fib[n-2]);
}
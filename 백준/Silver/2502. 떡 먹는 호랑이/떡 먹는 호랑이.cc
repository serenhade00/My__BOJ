#include <bits/stdc++.h>

using namespace std;

int fib[31];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int d, k;
    cin >> d >> k;
    
    fib[1] = 1, fib[2] = 1;
    for(int i=3; i<=d; i++)
        fib[i] = fib[i-1] + fib[i-2];
    
    int dp1_coef, dp2_coef;
    
    dp2_coef = fib[d-1], dp1_coef = fib[d-2];
    
    int st = k / dp2_coef;
    int a, b;
	
    while(st--)
    {
        a = st*dp2_coef;
        if((k - a) % dp1_coef == 0)
        {
        	b = (k-a) / dp1_coef;
        	break;
        }
    }
    cout << b << '\n' << st;
}
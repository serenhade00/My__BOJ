#include <bits/stdc++.h>

using namespace std;

int fib[46];

void fibo(void)
{
    fib[1] = 1;
    fib[2] = 1;
    for(int i=3; i<=45; i++)
        fib[i] = fib[i-1]+fib[i-2];
}

void least_num(int n)
{
	vector<int> v;
    while(n > 0)
    {
        int most = lower_bound(fib, fib+46, n)-fib;
        if(fib[most] > n)
        	most--;

        v.push_back(fib[most]);
        n -= fib[most];
    }
    reverse(v.begin(), v.end());
    for(auto e : v)
    	cout << e << ' ';
    
    cout << '\n';
}
int main(void)
{
    ios::sync_with_stdio(0);
    int n, val;
    cin >> n;
    
    fibo();
    for(int i=0; i<n; i++)
    {
        cin >> val;
        least_num(val);
    }
}
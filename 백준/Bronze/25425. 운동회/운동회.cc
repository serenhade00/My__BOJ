#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    long long n, m, a, k;
    long long mx, mn;
    cin >> n >> m >> a >> k;
    if(a-k >= n-1)
        mx = n;
    else
        mx = a-k+1;
    
    if((a-k) % m == 0)
        mn = (a-k) / m + 1;
    else
        mn = (a-k) / m + 2;
    cout << mx << ' ' << mn;
}
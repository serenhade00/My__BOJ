#include <bits/stdc++.h>

using namespace std;

int cache[1001][1001];

int solve(int n, int k)
{
	if(n <= 1 || n == k || k == 0)
        return 1;
    if(k == 1)
        return n;
    
    int &ret = cache[n][k];
    if(ret != -1)
        return ret;
   
    return cache[n][k] = (solve(n-1, k) + solve(n-1, k-1)) % 10007; 
}

int main(void)
{
    int n, k;
    cin >> n >> k;
    
    memset(cache, -1, sizeof(cache));
    cout << solve(n, k);
}
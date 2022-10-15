#include <bits/stdc++.h>

using namespace std;

long long solve(int n)
{
	if(n==0)
		return 0;
    return n*n*n + solve(n-1);
}
int main(void)
{
    int n;
    cin >> n;
    cout << solve(n);
    
}
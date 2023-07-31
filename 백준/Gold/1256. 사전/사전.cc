#include <bits/stdc++.h>
#define MAX 1000000001
using namespace std;

int dp[201][201];

int solve(int n, int k)
{
	if(n == 0 || k == 0)
		return 1;
	
	int &ret = dp[n][k];
	if(ret != -1)
		return ret;
	
	return dp[n][k] = min((solve(n-1, k) + solve(n, k-1)), MAX);
}

string get_ans(int a, int z, int order)
{
	string ans;
	if(a == 0)
	{
		for(int i=0; i<z; i++)
			ans += 'z';
		return ans;
	}
	if(z == 0)
	{
		for(int i=0; i<a; i++)
			ans += 'a';
		return ans;
	}
	
	int a_count = solve(a-1, z);
	if(order <= a_count)
		ans += 'a' + get_ans(a-1, z, order);
	else
		ans += 'z' + get_ans(a, z-1, order-a_count);
	
	return ans;
}

int main() 
{
	memset(dp, -1, sizeof(dp));
	int n, m, k;
	cin >> n >> m >> k;
	if(solve(n, m) < k)
	{
		cout << -1;
		return 0;
	}
	cout << get_ans(n, m, k);
}
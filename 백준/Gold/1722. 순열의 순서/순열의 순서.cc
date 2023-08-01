#include <bits/stdc++.h>

using namespace std;

int n;
int ans[21];
int num[21];
long long fact[21];
bool vis[21];
bool vis2[21];

void solve1(int cur, long long order)
{
	if(cur == n)
	{
		for(int i=0; i<n; i++)
			cout << ans[i] << ' ';
		return;
	}
	long long cur_count = fact[n-cur-1];
	for(int i=1; i<=n; i++)
	{
		if(vis[i])
			continue;
		if(order <= cur_count)
		{
			ans[cur] = i;
			vis[i] = 1;
			solve1(cur+1, order);
		}
		else
			order -= cur_count;
	}
}

void solve2()
{
	long long sum = 0;
	for(int i=0; i<n-1; i++)
	{
		long long cur_fact = fact[n-i-1];
		int cnt = 0;
		for(int j=1; j<num[i]; j++)
		{
			if(!vis[j])
				cnt++;
		}
		vis[num[i]] = 1;
		sum += cnt*cur_fact;
	}
	sum++;
	cout << sum;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    fact[0] = 1LL;
    fact[1] = 1LL;
    for(int i=2; i<=20; i++)
    	fact[i] = fact[i-1]*i;
    
    int op;
    long long val;
    cin >> n >> op;
    if(op == 1)
    {
    	cin >> val;
    	solve1(0, val);
    }
    else
    {
    	for(int i=0; i<n; i++)
    		cin >> num[i];
    	solve2();
    } 	
}
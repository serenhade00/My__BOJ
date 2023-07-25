#include <bits/stdc++.h>

using namespace std;

int tree[1000001];
long long n, m;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> m;
	for(int i=0; i<n; i++)
	{
		cin >> tree[i];
	}
	long long st = 0;
	long long en = *max_element(tree, tree+n);
	
	while(st<en)
	{
		long long mid = (st+en+1)/2;
		long long sum = 0;
		for(int i=0; i<n; i++)
		{
			if(tree[i] > mid)
			sum += tree[i] - mid;
		}
		if(sum >= m)
			st = mid;
		else
			en = mid-1;
	}
	cout << st;
}
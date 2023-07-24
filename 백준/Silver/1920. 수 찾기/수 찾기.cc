#include <bits/stdc++.h>

using namespace std;

int a[100001];
int b[100001];
int binary_search(int first, int last, int val)
{
	int mid = (first+last)/2;
	
	while(first <= last)
	{
		if(val==a[mid])
			return 1;
		else if(val < a[mid])
			return binary_search(first, mid-1, val);
		else
			return binary_search(mid+1, last, val);
	}
	return 0;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> a[i];

	sort(a, a+n);
	
	cin >> m;
	for(int i=0; i<m; i++)
	{
		cin >> b[i];
		if(binary_search(0, n-1, b[i]))
			cout << 1 << '\n';
		else
			cout << 0 << '\n';
	}
}
#include <bits/stdc++.h>

using namespace std;

int a[500001];
int b[500001];
unsigned int c[20000001];
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	int count = 0;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	a[n] = 10000001;
	sort(a, a+n);
	
	for(int i=0; i<n; i++)
	{
		count++;
		if(a[i]!=a[i+1])
		{
			c[a[i]+10000000] = count;
			count = 0;
		}
	}
	cin >> m;
	for(int i=0; i<m; i++)
	{
		cin >> b[i];
		cout << c[b[i]+10000000] << ' ';
	}
}
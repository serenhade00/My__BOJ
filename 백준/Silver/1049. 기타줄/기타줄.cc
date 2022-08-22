#include <bits/stdc++.h>

using namespace std;

int a[51];
int b[51];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	int ans;
	cin >> n >> m;
	
	for(int i=0; i<m; i++)
		cin >> a[i] >> b[i];
	
	sort(a, a+m);
	sort(b, b+m);
	
	if(a[0] < b[0]*6)
	{
		if(a[0] < b[0]*(n%6))
			ans = a[0]*(n/6+1);
		else
			ans = a[0]*(n/6)+b[0]*(n%6);
	}
	else
		ans = b[0]*n;
	cout << ans;
	
	
}
#include <bits/stdc++.h>

using namespace std;

int arr[100001];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	int ans = 1000000001;
	cin >> n >> m;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	
	int en = 0;
	int sum = arr[0];
	
	for(int st=0; st<n; st++)
	{
		while(en < n && sum < m)
		{
			en++;
			if(en != n)
			{
				sum += arr[en];
			}
		}
		if(en == n)
			break;
		ans = min(ans, en-st+1);
		sum -= arr[st];
		
	}
	if(ans == 1000000001)
		ans = 0;
	cout << ans;
	
}
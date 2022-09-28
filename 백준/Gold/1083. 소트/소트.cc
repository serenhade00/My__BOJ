#include <bits/stdc++.h>

using namespace std;

int num[51];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, s;
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> num[i];
		
	cin >> s;	
	for(int i=0; i<n && s; i++)
	{
		int mx = num[i], mx_idx = i;
		for(int j=i+1; j<n && j<=i+s; j++)
		{
			if(num[j] > mx)
				mx = num[j], mx_idx = j;
		}
		s -= mx_idx-i;
		while(mx_idx > i)
		{
			num[mx_idx] = num[mx_idx-1];
			mx_idx--;
		}
		num[i] = mx;
	}
	for(int i=0; i<n; i++)
		cout << num[i] << ' ';
}
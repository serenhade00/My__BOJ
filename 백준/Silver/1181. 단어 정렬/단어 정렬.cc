#include <bits/stdc++.h>

using namespace std;

bool com(string a, string b)
{
	return a.length() < b.length();
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	string a[20001];
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	sort(a, a+n);
	stable_sort(a, a+n, com);
	
	for(int i=0; i<n; i++)
	{
		if(a[i]==a[i-1])
			continue;
		cout << a[i] << '\n';
	}
}
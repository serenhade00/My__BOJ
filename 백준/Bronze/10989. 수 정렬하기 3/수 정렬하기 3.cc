#include <bits/stdc++.h>
#define MAX 10001

using namespace std;

int freq[MAX];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> a;
		freq[a]++;
	}
	for(int i=0; i<MAX; i++)
	{
		while(freq[i]--)
			cout << i << '\n';
	}
}
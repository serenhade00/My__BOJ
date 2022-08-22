#include <bits/stdc++.h>

using namespace std;

pair<int, int> fibo[41];

int main(void)
{
	int t, n;
	cin >> t;
	fibo[0].first = 1;
	fibo[1].second = 1;
	for(int i=2; i<=41; i++)
	{
		fibo[i].first = fibo[i-1].first+fibo[i-2].first;
		fibo[i].second = fibo[i-1].second+fibo[i-2].second;
	}
	for(int i=0; i<t; i++)
	{
		cin >> n;
		cout << fibo[n].first << ' ' << fibo[n].second << '\n';
	}
	
	
}
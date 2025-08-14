#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0); 
    cin.tie(0);
	ll a, b, cnt = 0;

	cin >> a >> b;
	while (true)
	{
		if (a < b) swap(a, b);
		if (a == b) break;
		cnt++;
		a -= b;
	}
	cout << cnt;
}
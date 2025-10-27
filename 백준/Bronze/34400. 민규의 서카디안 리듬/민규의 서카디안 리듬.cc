#include<iostream>
using namespace std;
int t, n;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> t;
	for (int i =0; i <t; i++)
	{
		cin >> n;
		n %= 25;
		if (n >= 0 && n <= 16)
			cout << "ONLINE\n";
		else
			cout << "OFFLINE\n";
	}
}
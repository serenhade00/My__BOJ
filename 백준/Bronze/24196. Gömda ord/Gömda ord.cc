#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0); 
    cin.tie(0);
	string s;
	cin >> s;
	int len = s.length(), i = 0;
	while (i < len)
	{
		cout << s[i];
		i += s[i] - 'A' + 1;
	}
}
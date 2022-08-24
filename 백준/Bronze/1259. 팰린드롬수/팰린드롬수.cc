#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	int len = 0;
	while(1)
	{
		int p = 0;
		cin >> s;
		len = s.size();
		if(s=="0")
			break;
		for(int i=0; i<len/2; i++)
		{
			if(s[i]!=s[(len-1)-i])
			{
				cout << "no\n";
				p = 1;
				break;
			}
		}
		if(p==0)
			cout << "yes\n";
	}
}
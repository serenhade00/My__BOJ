#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	while(1)
	{
		int t;
		cin >> t;
		if(t != 0)
		{
			double num[51];
			string s[51];
			for(int i=0; i<t; i++)
				cin >> s[i] >> num[i];
			
			double mx = *max_element(num, num+t);
			for(int i=0; i<t; i++)
			{
				if(num[i] == mx)
					cout << s[i] << ' ';
			}
			cout << '\n';
		}
		else
			break;
	}
}
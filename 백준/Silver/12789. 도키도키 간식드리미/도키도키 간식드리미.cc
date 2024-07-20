#include <bits/stdc++.h>

using namespace std;

int num[1001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	stack<int> s;
	int t, cur = 1;
	cin >> t;
	for(int i=0; i<t; i++)
		cin >> num[i];
	for(int i=0; i<t; i++)
	{
		while(!s.empty())
		{
			if(s.top() == cur)
			{
				cur++; 
				s.pop();
			}
			else
				break;
		}
		if(num[i] == cur)
			cur++;
		else
			s.push(num[i]);
	}
	while(!s.empty())
	{
		int tmp = s.top(); s.pop();
		if(tmp != cur)
		{
			cout << "Sad";
			return 0;
		}
		cur++;
	}
	cout << "Nice";
}
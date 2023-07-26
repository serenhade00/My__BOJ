#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	priority_queue<int> q;
	for(int i=0; i<n; i++)
	{
		int val;
		cin >> val;
		if(val == 0)
		{
			if(q.empty())
			{
				cout << 0 << '\n';
				continue;
			}
			cout << q.top() << '\n';
			q.pop();
		}
		else
			q.push(val);
	}
}
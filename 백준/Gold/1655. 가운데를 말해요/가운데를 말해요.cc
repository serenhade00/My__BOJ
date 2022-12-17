#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	priority_queue<int> mx_q;
	priority_queue<int, vector<int>, greater<int>> mn_q;
	
	int n, val, mid;
	cin >> n;
	
	cin >> val;
	mx_q.push(val);
	mid = val;
	
	cout << mid << '\n';
	for(int i=2; i<=n; i++)
	{
		cin >> val;
		if(val >= mid)
			mn_q.push(val);
		else
			mx_q.push(val);
		
		if(mn_q.size() > (mx_q.size() + 1))
		{
			mx_q.push(mn_q.top());
			mn_q.pop();
		}
		if(mx_q.size() > (mn_q.size() + 1))
		{
			mn_q.push(mx_q.top());
			mx_q.pop();
		}
		
		if(mx_q.size() >= mn_q.size())
		{
			cout << mx_q.top() << '\n';
			mid = mx_q.top();
		}
		else
		{
			cout << mn_q.top() << '\n';
			mid = mn_q.top();
		}
	}
}
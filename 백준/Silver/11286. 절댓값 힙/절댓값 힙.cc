#include <bits/stdc++.h>

using namespace std;

class comp
{
public:
	bool operator() (int a, int b)
	{
		if(abs(a) != abs(b))
			return abs(a) > abs(b);
		return a > 0 && b < 0;
	}
};

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	priority_queue<int, vector<int>, comp> q;
	
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
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	int sum = 0, tmp = 0;
	cin >> n;
    if(n==1)
    {
        cout << 0;
        return 0;
    }
	
	priority_queue<int, vector<int>, greater<int>> q;
	
	for(int i=0; i<n; i++)
	{
		int x; 
		cin >> x;
		q.push(x);
	}
	while(!q.empty())
	{
		for(int i=0; i<2; i++)
		{
			tmp += q.top();
			q.pop();
		}
		sum += tmp;
		if(q.empty())
			break;
		q.push(tmp);
		tmp = 0;
	}
	cout << sum;
}
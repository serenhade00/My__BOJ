#include <bits/stdc++.h>
#define MAX 51

using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	int count;
	int ans = 0;
	int c[MAX];
	deque<int> Q;
	
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		Q.push_back(i);
	}
	cin >> count;
	for(int i=0; i<count; i++)
	{
		cin >> c[i];
	}
	int index = c[0];
	
	for(int i=0; i<count; i++)
	{
		if(index<=(Q.size()+1)/2)
		{	
			while(Q.front()!=c[i])
			{
				Q.push_back(Q.front());
				Q.pop_front();
				ans++;
			}
			
			Q.pop_front();
			int j=1;
			for(int e : Q)
			{
				if(e==c[i+1])
				{
					index = j;
					break;
				}
				j++;
			}
		}
		else
		{
			while(Q.front()!=c[i])
			{
				Q.push_front(Q.back());
				Q.pop_back();
				ans++;
			}
			
			Q.pop_front();
			int j=1;
			for(int e : Q)
			{
				if(e==c[i+1])
				{
					index = j;
					break;
				}
				j++;
			}
		}
	}
	cout << ans;
	
}
#include <bits/stdc++.h>

using namespace std;

int n, m, val;
map<int,int> num;
vector<int> v;

void backtrack(int k)
{
	if(k==m)
	{
		for(int i=0; i<m; i++)
			cout << v[i] << ' ';
		cout << '\n';
		return;
	}
	for(auto i=num.begin(); i != num.end(); i++)
	{
		if(i->second > 0)
		{
			i->second--;
			v.push_back(i->first);
			backtrack(k+1);
			v.pop_back();
			i->second++;
		}
	}
}
int main() {
	
	cin >> n >> m;
	
	for(int i=0; i<n; i++)
	{
		cin >> val;
		if(num.find(val) == num.end())
			num.insert({val, 1});
		else
			num[val]++;
	}
		
	backtrack(0);
}
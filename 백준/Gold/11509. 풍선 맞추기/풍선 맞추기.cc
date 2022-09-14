#include <bits/stdc++.h>

using namespace std;

map<int,int> arrow; // 높이, 화살 개수
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, cnt = 0;
	cin >> n;
	vector<int> v(n);
	
	for(int i=0; i<n; i++)
		cin >> v[i];
		
	for(int i=0; i<n; i++)
	{
		if(arrow[v[i]])
			arrow[v[i]]--;
		else
			cnt++;
		arrow[v[i]-1]++;
	}
	cout << cnt;
}
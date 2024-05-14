#include <bits/stdc++.h>

using namespace std;

set<int> ss;
pair<int, string> p[401];
char s[401];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	for(int i=0; i<n; i++)
	{
		int mx = 0, tmp = 0;
		string name;
		for(int j=0; j<m; j++)
			cin >> s[j];
		for(int j=0; j<m; j++)
		{
			if(s[j] == '.')
				tmp++;
			else
			{
				mx = max(mx, tmp);
				tmp = 0;
			}
		}
		mx = max(mx, tmp);
		ss.insert(mx);
		cin >> name;
		p[i].first = mx, p[i].second = name;
	}
	cout << ss.size() << '\n';
	for(int i=0; i<n; i++)
		cout << p[i].first << ' ' << p[i].second << '\n';
}
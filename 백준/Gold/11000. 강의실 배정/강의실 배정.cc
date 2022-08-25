#include <bits/stdc++.h>

using namespace std;

pair<int,int> a[200001];

class com {
public:	bool operator() (const pair<int, int> a, const pair<int, int> b) {
	return a.second > b.second;
}
};

int main(void)
{
	int n;
	int st, en;
	cin >> n;
	
	priority_queue<pair<int,int>, vector<pair<int,int>>, com> pq;
	
	for(int i=0; i<n; i++)
		cin >> a[i].first >> a[i].second;
	
	sort(a, a+n);
	pq.push({a[0].first, a[0].second});
	for(int i=1; i<n; i++)
	{
		int st = a[i].first;
		int en = a[i].second;
		if(st < pq.top().second)
			pq.push({st, en});
		else
		{
			pq.pop();
			pq.push({st, en});
		}
	}
	cout << pq.size();

}
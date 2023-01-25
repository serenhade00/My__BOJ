#include <bits/stdc++.h>

using namespace std;

vector<int> p(100001, -1);
tuple<int,int,int,int> point[100001];
tuple<long long,int,int> edge[300001];

bool cmpx(tuple<int,int,int,int> &p1, tuple<int,int,int,int> &p2)
{
	return get<0>(p1) < get<0>(p2);
}
bool cmpy(tuple<int,int,int,int> &p1, tuple<int,int,int,int> &p2)
{
	return get<1>(p1) < get<1>(p2);
}
bool cmpz(tuple<int,int,int,int> &p1, tuple<int,int,int,int> &p2)
{
	return get<2>(p1) < get<2>(p2);
}

long long get_dist(tuple<int,int,int,int> &p1, tuple<int,int,int,int> &p2)
{
	return min({abs(get<0>(p1)-get<0>(p2)), abs(get<1>(p1)-get<1>(p2)), abs(get<2>(p1)-get<2>(p2))});
}

int get_find(int x)
{
	if(p[x] < 0)
		return x;
	return p[x] = get_find(p[x]);
}

int get_union(int u, int v)
{
	u = get_find(u), v = get_find(v);
	if(u == v)
		return 0;
	if(p[u] == p[v])
		p[u]--;
	if(p[u] < p[v])
		p[v] = u;
	else
		p[u] = v;
	return 1;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, x, y, z;
	cin >> n;
	
	for(int i=1; i<=n; i++)
	{
		cin >> x >> y >> z;
		point[i] = make_tuple(x, y, z, i);
	}
	
	int idx = 0;
	sort(point+1, point+n+1, cmpx);
	for(int i=1; i<n; i++)
	{
		edge[idx] = {get_dist(point[i], point[i+1]), get<3>(point[i]), get<3>(point[i+1])};
		idx++;
	}
	sort(point+1, point+n+1, cmpy);
	for(int i=1; i<n; i++)
	{
		edge[idx] = {get_dist(point[i], point[i+1]), get<3>(point[i]), get<3>(point[i+1])};
		idx++;
	}
	sort(point+1, point+n+1, cmpz);
	for(int i=1; i<n; i++)
	{
		edge[idx] = {get_dist(point[i], point[i+1]), get<3>(point[i]), get<3>(point[i+1])};
		idx++;
	}
	
	sort(edge, edge+idx);
	
	int cnt = 0;
	long long sum = 0;
	
	for(int i=0; i<idx; i++)
	{
		long long cost;
		int a, b;
		tie(cost, a, b) = edge[i];
		if(get_union(a, b))
		{
			sum += cost;
			cnt++;
		}
		if(cnt >= n-1)
			break;
	}

	cout << sum;
	
	
}
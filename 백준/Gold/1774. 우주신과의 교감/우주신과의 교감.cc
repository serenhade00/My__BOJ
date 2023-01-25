#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

vector<int> p(1001, -1);
pair<int,int> point[1001];
tuple<long double,int,int> edge[1000001];

long double get_dist(pair<int, int> &p1, pair<int,int> &p2)
{
	return sqrt(pow(abs(p1.X-p2.X), 2) + pow(abs(p1.Y-p2.Y), 2));
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
	
	int n, m, x, y;
	cin >> n >> m;
	
	for(int i=1; i<=n; i++)
		cin >> point[i].X >> point[i].Y;
	
	int p1, p2;
	
	int tmp = 0;
	for(int i=0; i<m; i++)
	{
		cin >> p1 >> p2;
		if(get_union(p1, p2))
			tmp++;
	}
	
	int idx = 0;
	for(int i=1; i<=n; i++)
	{
		for(int j=i+1; j<=n; j++)
		{
			edge[idx] = {get_dist(point[i], point[j]), i, j};
			idx++;
		}
	}
	
	sort(edge, edge+idx);
	int num = n-1-tmp;
	int cnt = 0;
	long double sum = 0;
	for(int i=0; i<idx; i++)
	{
		long double cost;
		int a, b;
		tie(cost, a, b) = edge[i];
		if(get_union(a, b))
		{
			sum += cost;
			cnt++;
		}
		if(cnt >= num)
			break;
	}
	
	cout << fixed;
	cout.precision(2);
	
	cout << sum;
	
	
}
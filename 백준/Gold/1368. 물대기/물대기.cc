#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

#define MAX 305

using namespace std;

int v, e, sum, cnt;
vector<int> p(MAX, -1);
tuple<int, int, int> edge[100001];

int find(int x)
{
	if (p[x] < 0)
		return x;
	return p[x] = find(p[x]);
}

bool uni(int a, int b)
{
	a = find(a), b = find(b);
	if (a == b)
		return true;
	if (p[b] < p[a])
		swap(a, b);
	if (p[a] == p[b])
		p[a]--;
	p[b] = a;
	return false;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int cost, a, b;
	cin >> v;
	for (int i = 1; i <= v; i++)
	{
		cin >> cost;
		edge[e++] = { cost, i, v + 1 };
	}
	for (int i = 1; i <= v; i++)
	{
		for (int j = 1; j <= v; j++)
		{
			cin >> cost;
			if (i > j)
				continue;
			edge[e++] = { cost, i, j };
		}
	}
	sort(edge, edge + e);
	v++;
	for (int i = 0; i < e; i++)
	{
		int cost, a, b;
		tie(cost, a, b) = edge[i];
		if (!uni(a, b))
		{
			sum += cost;
			cnt++;
			if (cnt >= v - 1)
				break;
		}
	}
	cout << sum;
}
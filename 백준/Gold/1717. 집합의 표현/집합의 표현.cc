#include <iostream>
#include <vector>
#define MAX 1000001

using namespace std;

vector<int> p(MAX, -1);

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

	int n, m, op, a, b;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> op >> a >> b;
		if (!op)
			uni(a, b);
		else
		{
			if (find(a) == find(b))
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
}
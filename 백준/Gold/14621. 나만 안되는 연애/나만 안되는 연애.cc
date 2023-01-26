#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

vector<int> p(1001, -1);
char school[1001];
tuple<int,int,int> edge[10001];

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
		cin >> school[i];
	
    int idx = 0;
	for(int i=0; i<m; i++)
    {
        int cost, a, b;
        cin >> a >> b >> cost;
        if(school[a] != school[b])
        {
            edge[idx] = {cost, a, b};
            idx++;
        }
    }
	
	sort(edge, edge+idx);
	
	int sum = 0;
    int num = 0;
	for(int i=0; i<idx; i++)
    {
		int cost, a, b;
		tie(cost, a, b) = edge[i];
		if(get_union(a, b))
		{
			sum += cost;
			num++;
		}
		if(num >= n-1)
			break;
	}
	if(num < n-1)
		cout << -1;
	else
		cout << sum;
}
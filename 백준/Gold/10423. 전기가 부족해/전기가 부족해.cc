#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

vector<int> p(1001, -1);
bool is_plant[1001];
tuple<int,int,int> edge[100001];

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
	if(is_plant[u])
		p[v] = u;
	else
		p[u] = v;
	return 1;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, k, val;
	cin >> n >> m >> k;
	
	for(int i=0; i<k; i++)
    {
        cin >> val;
        is_plant[val] = 1;
    }
    int cost, a, b;
	for(int i=0; i<m; i++)
    {
        cin >> a >> b >> cost;
        edge[i] = {cost, a, b};
    }

	sort(edge, edge+m);

    int sum = 0;
    int num = 0;
	for(int i=0; i<m; i++)
    {
		int cost, a, b;
		tie(cost, a, b) = edge[i];
		a = get_find(a), b = get_find(b);
        if(is_plant[a] && is_plant[b])
            continue;
		if(get_union(a, b))
		{
			sum += cost;
			num++;
		}
		if(num >= n-1)
			break;
	}
	
	cout << sum;
}
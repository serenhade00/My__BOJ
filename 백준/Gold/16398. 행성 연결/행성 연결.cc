#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

vector<int> p(1001, -1);
int graph[1001][1001];
tuple<int,int,int> edge[1000001];

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
	
	int n;
	cin >> n;
	
	for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            cin >> graph[i][j];
    }
	
    int idx = 0;
	for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            edge[idx] = {graph[i][j], i, j};
            idx++;
        }
    }
	
	sort(edge, edge+idx);
	
	long long sum = 0;
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
	
	cout << sum;
}
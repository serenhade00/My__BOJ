#include <bits/stdc++.h>

using namespace std;

struct TR {
	int v1, v2, w;
};

bool comp(TR a, TR b)
{
	return a.w < b.w;
}

TR A[100001];
int root[10001];

int set_find(int a)
{
	if(root[a] == a)
		return a;
	else
		return root[a] = set_find(root[a]);
}

int set_union(int a, int b)
{
	int x = set_find(a);
	int y = set_find(b);
	if(x != y)
	{
		root[x] = y;
		return 1;
	}
	return 0;
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n1, n2;
	int V1, V2, e;
	int edge = 0;
	int ans;
	int weight = 0;
	cin >> n1 >> n2;
	for(int i=1; i<=n1; i++)
		root[i] = i;
	for(int i=0; i<n2; i++)
	{
		cin >> V1 >> V2 >> e;
		A[i].v1 = V1; A[i].v2 = V2; A[i].w = e;
	}
	ans = n1-1;
	sort(A, A+n2, comp);
	
	for(int i=0; i<n2; i++)
	{
		if(set_union(A[i].v1, A[i].v2))
		{
			edge++;
			weight += A[i].w;
		}
		if(edge == ans)
			break;
	}
	cout << weight;
}
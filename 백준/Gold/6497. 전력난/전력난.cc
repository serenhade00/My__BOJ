#include <bits/stdc++.h>

using namespace std;

struct TR {
	int v1, v2, w;
};

bool comp(TR a, TR b)
{
	return a.w < b.w;
}

int set_find(int a, int root[])
{
	if(root[a] == a)
		return a;
	else
		return root[a] = set_find(root[a], root);
}

int set_union(int a, int b, int root[])
{
	int x = set_find(a, root);
	int y = set_find(b, root);
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
	cin >> n1 >> n2;
	
    while(1)
    {
        TR A[200001];
        int root[200001] = {0};
        long long sum = 0;
	    int V1, V2, e;
	    int edge = 0;
	    int ans;
	    int weight = 0;
        if(n1 == 0 && n2 == 0)
            break;
        for(int i=1; i<=n1; i++)
		    root[i] = i;
	    for(int i=0; i<n2; i++)
	    {
		    cin >> V1 >> V2 >> e;
		    sum += e;
		    A[i].v1 = V1; A[i].v2 = V2; A[i].w = e;
		    
	    }
	    ans = n1-1;
	    sort(A, A+n2, comp);
	
	    for(int i=0; i<n2; i++)
	    {
		    if(set_union(A[i].v1, A[i].v2, root))
		    {
			    edge++;
			    weight += A[i].w;
		    }
		    if(edge == ans)
			    break;
	    }
	    cout << sum-weight << '\n';
        cin >> n1 >> n2;
    }
	
}
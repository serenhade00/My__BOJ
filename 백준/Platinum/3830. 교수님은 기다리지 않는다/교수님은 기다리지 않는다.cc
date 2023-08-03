#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

int p[MAX];
long long dp[MAX];

int find(int x)
{
	if(p[x] < 0)
		return x;
    int r = find(p[x]);
	dp[x] += dp[p[x]]; // x의 새로운 그룹 투르 거리 = x의 기존 그룹 루트까지 거리 + 부모 루트의 거리
	return p[x] = r;
}

void get_union(int u, int v, int diff)
{
	int a = find(u), b = find(v);
	if(a == b)
		return;
	
	int new_dist = dp[u] + diff; // u의 그룹 루트까지의 거리 + u~v 거리
	int old_dist = dp[v]; // v의 그룹 루트까지의 거리
	
	p[b] = a; // union, 루트는 작은 쪽으로.
	dp[b] = new_dist - old_dist; // v의 기존 루트부터 u의 루트까지의 거리 = new_dist - old_dist
	// ex) a(root)~c, d(root)~f 그룹일 때 union(b, e)시, 
	// dp[d](a~d) = dp[b] + diff(b~e) -> (a~e) - dp[e](d~e) 
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, a, b, gap;
    char op;
    while(1)
    {
    	cin >> n >> m;
    	if(n == 0 && m == 0)
    		break;
    	for(int i=1; i<=n; i++)
    	{
    		p[i] = -1;
    		dp[i] = 0;
    	}
    	for(int i=0; i<m; i++)
	    {
	    	cin >> op;
	    	if(op == '!')
	    	{
	    		cin >> a >> b >> gap;
	    		get_union(a, b, gap);
	    	}
	    	else
	    	{
	    		cin >> a >> b;
	    		if(find(a) != find(b))
	    			cout << "UNKNOWN\n";
	    		else
	    			cout << dp[b] - dp[a] << '\n';
	    	}
	    }
    }
}
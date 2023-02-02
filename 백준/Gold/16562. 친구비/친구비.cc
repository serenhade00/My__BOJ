#include <bits/stdc++.h>

using namespace std;

vector<int> p(10001, -1);
int money[10001];

int find(int x)
{
    if(p[x] < 0)
        return x;
    return p[x] = find(p[x]);
}

int get_union(int u, int v)
{
    u = find(u), v = find(v);
    if(u == v)
        return 0;
    if(money[u] < money[v])
        p[v] = u;
    else
        p[u] = v;
    return 1;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, k;
    cin >> n >> m >> k;
    
    for(int i=1; i<=n; i++)
        cin >> money[i];
    
    for(int i=0; i<m; i++)
    {
        int a, b;
        cin >> a >> b;
        get_union(a, b);
    }
    
    int ans = 0;
    for(int i=1; i<=n; i++)
    {
        int val = find(i);
        if(val == i)
        {
        	if(k >= money[i])
        	{
        		k -= money[i];
            	ans += money[i];
        	}
            else
            {
            	cout << "Oh no";
            	return 0;
            }
        }
    }
    cout << ans;
}
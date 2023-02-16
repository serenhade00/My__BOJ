#include <bits/stdc++.h>

using namespace std;

vector<int> p(300001, -1);

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
    
    if(p[u] <= p[v])
        p[v] = u;
    else
        p[u] = v;
    return 1;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, a, b;
    cin >> n;
    
    for(int i=0; i<n-2; i++)
    {
        cin >> a >> b;
        get_union(a, b);
    }
    
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(get_union(i, j))
            {
                cout << i << ' ' << j;
                return 0;
            }
        }
    }
}
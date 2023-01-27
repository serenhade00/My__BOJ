#include <bits/stdc++.h>

using namespace std;

vector<int> p(1000001, -1);

int get_find(int x)
{
    if(p[x] < 0)
        return x;
    return get_find(p[x]);
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
    
    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int val, a, b;
        cin >> val >> a >> b;
        if(!val)
            get_union(a, b);
        else
        {
        	a = get_find(a), b = get_find(b);
            if(a == b)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
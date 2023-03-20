#include <bits/stdc++.h>

using namespace std;

vector<int> p(1000001, -1);

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
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n, k, m, a, b;
        cin >> n >> k;
        cout << "Scenario " << i+1 << ":\n";
        for(int j=0; j<k; j++)
        {
            cin >> a >> b;
            get_union(a, b);
        }
        cin >> m;
        for(int j=0; j<m; j++)
        {
            cin >> a >> b;
            if(find(a) != find(b))
                cout << 0 << '\n';
            else
                cout << 1 << '\n';
        }
        fill(p.begin(), p.end(), -1);
        cout << '\n';
    }
}
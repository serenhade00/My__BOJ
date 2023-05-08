#include <bits/stdc++.h>

using namespace std;

vector<int> p(500001, -1);

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
    
    int n, m, a, b;
    cin >> n >> m;
    
    for(int i=0; i<m; i++)
    {
        cin >> a >> b;
        if(!get_union(a, b))
        {
            cout << i+1;
            return 0;
        }
    }
    cout << 0;
}
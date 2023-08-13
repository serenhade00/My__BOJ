#include <bits/stdc++.h>
#define MAX 17
#define X first
#define Y second
using namespace std;

int depth[40001];
pair<int,int> parent[40001][MAX];
vector<pair<int,int>> graph[40001];

void make_depth(int cur)
{
    for(auto nxt : graph[cur])
    {
        if(!depth[nxt.X])
        {
            depth[nxt.X] = depth[cur] + 1;
            parent[nxt.X][0].X = cur, parent[nxt.X][0].Y = nxt.Y;
            make_depth(nxt.X);
        }
    }
}

void make_parent(int v)
{
    for(int j=0; j<=MAX-1; j++)
    {
        for(int i=1; i<=v; i++)
        {
            auto k = parent[i][j];
            int father = k.X;
            if(k.X)
            {
            	parent[i][j+1].X = parent[father][j].X;
            	parent[i][j+1].Y = parent[i][j].Y + parent[father][j].Y;
            }
        }
    }
}

void get_lca(int a, int b)
{
	int ans = 0;
    if(depth[a] < depth[b])
        swap(a, b);
    
    int diff = depth[a] - depth[b];
    int cnt = 0;
	
    while(diff)
    {
        if(diff % 2)
        {
        	ans += parent[a][cnt].Y;
        	a = parent[a][cnt].X;
        }
        diff /= 2;
        cnt++;
    }
    if(a == b)
    {
        cout << ans << '\n';
        return;
    }
    for(int i=MAX-1; i>=0; i--)
    {
        if(parent[a][i].X != parent[b][i].X)
        {
        	ans += parent[a][i].Y;
            ans += parent[b][i].Y;
            a = parent[a][i].X;
            b = parent[b][i].X;
        }
    }
    
    cout << ans + parent[a][0].Y + parent[b][0].Y << '\n';
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int v, m, a, b, edge;
    cin >> v;
    for(int i=0; i<v-1; i++)
    {
        cin >> a >> b >> edge;
        graph[a].push_back({b, edge});
        graph[b].push_back({a, edge});
    }
    
    depth[1] = 1;
    make_depth(1);
    make_parent(v);
    
    cin >> m;
    for(int i=0; i<m; i++)
    {
        cin >> a >> b;
        get_lca(a, b);
    }
}
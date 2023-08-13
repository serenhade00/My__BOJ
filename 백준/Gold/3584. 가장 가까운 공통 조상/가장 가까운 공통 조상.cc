#include <bits/stdc++.h>
#define MAX 14
using namespace std;

int depth[10001];
int indeg[10001];
int parent[10001][MAX];
vector<vector<int>> graph;

void make_depth(int cur)
{
    for(auto nxt : graph[cur])
    {
        if(!depth[nxt])
        {
            depth[nxt] = depth[cur] + 1;
            parent[nxt][0] = cur;
            make_depth(nxt);
        }
    }
}

void make_parent(int v)
{
    for(int j=0; j<=MAX-1; j++)
    {
        for(int i=1; i<=v; i++)
        {
            int k = parent[i][j];
            if(k)
                parent[i][j+1] = parent[k][j];
        }
    }
}

void get_lca(int a, int b)
{
    if(depth[a] < depth[b])
        swap(a, b);
    
    int diff = depth[a] - depth[b];
    int cnt = 0;
    while(diff)
    {
        if(diff % 2)
            a = parent[a][cnt];
        diff /= 2;
        cnt++;
    }
    if(a == b)
    {
        cout << a << '\n';
        return;
    }
    for(int i=MAX-1; i>=0; i--)
    {
        if(parent[a][i] != parent[b][i])
        {
            a = parent[a][i];
            b = parent[b][i];
        }
    }
    cout << parent[a][0] << '\n';
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, v, m, a, b;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int v, a, b;
        cin >> v;
        graph.assign(v+1, vector<int>());
        fill(indeg+1, indeg+1+v, 0);
        fill(depth+1, depth+1+v, 0);
        for(int i=1; i<=v; i++)
            fill(parent[i], parent[i]+MAX, 0);
        for(int i=0; i<v-1; i++)
        {
            cin >> a >> b;
            indeg[b]++;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        int root;
        for(int i=1; i<=v; i++)
        {
        	if(!indeg[i])
        	{
        		root = i;
        		break;
        	}
        }
        depth[root] = 1;
        make_depth(root);
        make_parent(v);
        cin >> a >> b;
        get_lca(a, b);
    }
}
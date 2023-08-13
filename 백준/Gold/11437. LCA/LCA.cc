#include <bits/stdc++.h>
#define MAX 17
using namespace std;

int depth[50001];
int parent[50001][MAX];
vector<int> graph[50001];

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
    
    int v, m, a, b;
    cin >> v;
    for(int i=0; i<v-1; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
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
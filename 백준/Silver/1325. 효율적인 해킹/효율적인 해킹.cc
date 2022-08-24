#include <bits/stdc++.h>

using namespace std;

int n, m, cnt;
vector<int> graph[10001];
int vis[10001];
int edge[10001];

void dfs(int cur, int num)
{
    vis[cur] = 1;
    int len = graph[cur].size();
    for(int i=0; i<len; i++)
    {
        if(!vis[graph[cur][i]])
        {
            cnt++;
            dfs(graph[cur][i], num);
        }
    }
    
    edge[num] = max(edge[num], cnt);
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x, y, mx;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        cin >> x >> y;
        graph[y].push_back(x);
    }
    for(int i=1; i<=n; i++)
    {
	    dfs(i, i);
	    fill(vis+1, vis+1+n, 0);
        cnt = 0;
    }
    
    mx = *max_element(edge+1, edge+1+n);
	for(int i=1; i<=n; i++)
	{
		if(edge[i] == mx)
			cout << i << ' ';
	}
    
}
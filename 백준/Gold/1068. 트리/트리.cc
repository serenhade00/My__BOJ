#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> v;
int cnt[51];
int p[51];

void dfs(int cur, int prev)
{
    if(v[cur].size() == 0)
    {
        cnt[cur] = 1;
        return;
    }
    else
    {
        for(auto nxt : v[cur])
        {
            dfs(nxt, cur);
            cnt[cur] += cnt[nxt];
        }
    }
}

void solve(int root, int x)
{
    dfs(root, -1);
    if(root == x)
    	cout << 0;
    else if(cnt[root] - cnt[x] != 0)
	{
		if(v[p[x]].size() == 1)
			cout << cnt[root] - cnt[x] + 1;
		else
			cout << cnt[root] - cnt[x];
	}
    else
    	cout << 1;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, root, node, x;
    cin >> n;
    v.assign(n, vector<int>());
    for(int i=0; i<n; i++)
    {
        cin >> node;
        if(node == -1)
        {
            root = i;
            continue;
        }
        v[node].push_back(i);
        p[i] = node;
    }
    cin >> x;
    solve(root, x);
}
#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

vector<vector<pair<int,int>>> v;
int tmp[10001];
int total[10001];

void dfs(int cur, int prev)
{
    if(v[cur].size() == 0)
    	return;
    else
    {
    	vector<int> mx;
    	int cnt = 0;
        for(auto nxt : v[cur])
        {
            if(nxt.X != prev)
            {
                dfs(nxt.X, cur);
                tmp[cur] = max(tmp[cur], tmp[nxt.X] + nxt.Y);
                mx.push_back(tmp[nxt.X] + nxt.Y);
            }
        }
        sort(mx.begin(), mx.end());
        int len = mx.size();
        total[cur] += mx[len-1];
        total[cur] += mx[len-2];
    }
}

void solve(int n)
{
	dfs(1, -1);
    int mx = 0;
    for(int i=1; i<=n; i++)
        mx = max(mx, total[i]);
    cout << mx;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    int n;
    cin >> n;
    v.assign(n+1, vector<pair<int,int>>());
    for(int i=0; i<n-1; i++)
    {
        int st, en, edge;
        cin >> st >> en >> edge;
        v[st].push_back({en, edge});
    }
	solve(n);
}
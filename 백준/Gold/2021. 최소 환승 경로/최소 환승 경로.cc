#include <bits/stdc++.h>

using namespace std;

vector<int> graph[200001];
int vis[200001];

int solve(int st, int en)
{
	queue<int> q;
	q.push(st); vis[st] = 1;
	while(!q.empty())
	{
		int cur = q.front(); q.pop();
		if(cur == en)
			return vis[en] > 1 ? vis[en] - 2 : 0;
		for(auto nxt : graph[cur])
		{
			if(vis[nxt])
				continue;
			if(nxt > 100000)
				vis[nxt] = vis[cur] + 1;
			else
				vis[nxt] = vis[cur];
			q.push(nxt);
		}
	}
	return -1;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, l, val, st, en;
    cin >> n >> l;
    for(int i=1; i<=l; i++)
    {
    	while(1)
    	{
    		cin >> val;
    		if(val == -1)
    			break;
    		graph[i+100000].push_back(val);
    		graph[val].push_back(i+100000);
    	}
    }
    cin >> st >> en;
    cout << solve(st, en);
}
#include <bits/stdc++.h>

using namespace std;

int n, st;

vector<int> graph[32001];
int indeg[32001];
int build_time[32001];
int dp[32001];

void topology_sort(void)
{
    queue<int> q;
    for(int i=1; i<=n; i++)
    {
        if(!indeg[i])
        {
            q.push(i);
            dp[i] = build_time[i];
        }
    }
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();
        for(auto nxt : graph[cur])
        {
            if(indeg[nxt])
            {
            	indeg[nxt]--;
            }
            if(indeg[nxt] == 0)
            {
                q.push(nxt);
            }
            dp[nxt] = max(dp[nxt], dp[cur]+build_time[nxt]);
        }
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        int t, cnt = 0;
        cin >> t;
        build_time[i] = t;
        cin >> st;
        while(st != -1)
        {
            graph[st].push_back(i);
            cnt++;
            cin >> st;
        }
        indeg[i] = cnt;
    }
    topology_sort();
    for(int i=1; i<=n; i++)
    	cout << dp[i] << '\n';
    
}
#include <bits/stdc++.h>

using namespace std;

int n;

int indeg[10001];
int build_time[10001];
int dp[10001];

void topology_sort(vector<int> graph[])
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
    
    int t;
    cin >> t;
    for(int l=0; l<t; l++)
    {
    	vector<int> graph[1001];
        int k, st, en, ans;
        cin >> n >> k;
        for(int j=1; j<=n; j++)
            cin >> build_time[j];
        for(int j=1; j<=k; j++)
        {
            cin >> st >> en;
            graph[st].push_back(en);
            indeg[en]++;
        }
        cin >> ans;
        topology_sort(graph);
        cout << dp[ans] << '\n';
        fill(dp+1, dp+1+n, 0);
        fill(indeg+1, indeg+1+n, 0);
    }
    
}
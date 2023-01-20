#include <bits/stdc++.h>

using namespace std;

int n;
int graph[51][51];
int vis[51];
int score[51];

void solve()
{
    int mn = 101;

    for(int i=1; i<=n; i++)
    {
    	fill(vis+1, vis+1+n, 0);
        queue<int> q;
        q.push(i);
        vis[i] = 1;

        while(!q.empty())
        {
            int cur = q.front();
            q.pop();
            
            for(int nxt=1; nxt<=n; nxt++)
            {
                if(graph[cur][nxt] && !vis[nxt])
                {
                    vis[nxt] = vis[cur] + 1;
                    q.push(nxt);
                }
            }
            
        }
        score[i] = *max_element(vis+1, vis+n+1) - 1;
        mn = min(mn, score[i]);
    }
	vector<int> ans;
    for(int i=1; i<=n; i++)
    {
        if(score[i] == mn)
            ans.push_back(i);
    }
    sort(ans.begin(), ans.end());
    cout << mn << ' ' << ans.size() << '\n';
    for(auto e : ans)
        cout << e << ' ';
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int st = 0, en = 0;
    cin >> n;
    
    while(st != -1 || en != -1)
    {
        cin >> st >> en;
        graph[st][en] = 1, graph[en][st] = 1;
    }
    solve();

}
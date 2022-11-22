#include <bits/stdc++.h>

using namespace std;

int n, m;

int vis[20001];
int ok[20001];

void make_group(vector<int> graph[20001])
{
	for(int i=1; i<=n; i++)
	{
		queue<int> q;
		if(!ok[i] || vis[i])
			continue;
		q.push(i);
		vis[i] = 1;
		
		while(!q.empty())
	    {
	        bool op = 0;
	        auto cur = q.front();
	        q.pop();
	        
	        if(vis[cur] == 2)
	            op = 1;
	          
	        for(auto nxt : graph[cur])
	        {
	            if(!vis[nxt])
	            {
	                if(op)
	                    vis[nxt] = 1;
	                else
	                    vis[nxt] = 2;
	                q.push(nxt);
	            }
	        }
	    }
	}
}

void check_group(int n, vector<int> graph[20001])
{
    bool op = 0;
    for(int i=1; i<=n; i++)
    {
        int group = vis[i];
        for(auto nxt : graph[i])
        {
            if(vis[nxt] == group)
            {
                op = 1;
                break;
            }
        }
    }
    if(op)
        cout << "NO\n";
    else
        cout << "YES\n";
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    for(int i=0; i<t; i++)
    {
        int st, en, tmp_st;
        vector<int> graph[20001];
        cin >> n >> m;
        for(int i=0; i<m; i++)
        {
            cin >> st >> en;
            graph[st].push_back(en);
            graph[en].push_back(st);
            ok[st] = 1, ok[en] = 1;
        }
        make_group(graph);
        check_group(n, graph);
        fill(vis+1, vis+1+n, 0);
    }
}
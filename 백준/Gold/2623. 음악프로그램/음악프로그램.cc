#include <bits/stdc++.h>

using namespace std;

int n, m, st, en;

vector<int> graph[1001];
int indeg[1001];

void topology_sort(void)
{
    queue<int> q;
    vector<int> v;
    for(int i=1; i<=n; i++)
    {
        if(!indeg[i])
            q.push(i);
    }
    int cnt = 0;
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();
        v.push_back(cur);
        cnt++;
        for(auto nxt : graph[cur])
        {
            if(indeg[nxt])
                indeg[nxt]--;
            if(indeg[nxt] == 0)
                q.push(nxt);
        }
    }
    if(cnt != n)
    	cout << 0;
    else
    {
    	for(auto x : v)
    		cout << x << '\n';
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
    	int num, val;
    	cin >> num;
    	vector<int> v;
    	for(int j=0; j<num; j++)
    	{
    		cin >> val;
    		v.push_back(val);
    	}
        for(int j=0; j<num-1; j++)
        {
        	graph[v[j]].push_back(v[j+1]);
        	indeg[v[j+1]]++;
        }
    }
    topology_sort();
}
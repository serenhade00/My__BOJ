#include <bits/stdc++.h>

using namespace std;

int n, m, st, en;

vector<int> graph[3001];
int indeg[3001];
int num[3001];
int val[3001][3001];

void topology_sort(void)
{
    queue<int> q;
    for(int i=1; i<=n; i++)
    {
        if(!indeg[i])
            q.push(i);
    }
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();
        cout << cur << ' ';
        for(auto nxt : graph[cur])
        {
            if(indeg[nxt])
                indeg[nxt]--;
            if(indeg[nxt] == 0)
                q.push(nxt);
        }
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    for(int i=0; i<3; i++)
    {
    	for(int j=0; j<n; j++)
    		cin >> num[j];
    	for(int j=0; j<n; j++)
    	{
    		for(int k=j+1; k<n; k++)
    		{
    			val[num[j]][num[k]]++; 
    		}
    	}
    }
    
    for(int i=1; i<=n; i++)
    {
    	for(int j=1; j<=n; j++)
    	{
    		if(i==j)
    			continue;
    		if(val[i][j] > val[j][i])
    		{
    			graph[i].push_back(j);
        		indeg[j]++;
    		}
    		else
    		{
    			graph[j].push_back(i);
        		indeg[i]++;
    		}
    	}
    }

    topology_sort();
}
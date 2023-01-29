#include <bits/stdc++.h>

using namespace std;

vector<int> p(51, -1);
vector<int> people[51];
int truth[51];


int find(int x)
{
    if(p[x] < 0)
        return x;
    return p[x] = find(p[x]);
}

int get_union(int u, int v)
{
    u = find(u), v = find(v);
    if(u == v)
        return 0;
    if(truth[u])
        p[v] = u;
    else
        p[u] = v;
    return 1;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, t, val;
    cin >> n >> m >> t;
    
    for(int i=0; i<t; i++)
    {
        cin >> val;
        truth[val] = 1;
    }
    
    for(int i=0; i<m; i++)
    {
        int num, val;
        cin >> num;
        for(int j=0; j<num; j++)
        {
        	cin >> val;
        	people[i].push_back(val);
        }
        for(int j=0; j<num-1; j++)
            get_union(people[i][j], people[i][j+1]);
    }
    int ans = 0;
    for(int i=0; i<m; i++)
    {
    	bool op = 0;
    	int len = people[i].size();
        for(int j=0; j<len; j++)
        {
        	if(truth[find(people[i][j])])
        	{
        		op = 1;
        		break;
        	}
        }
        if(!op)
        	ans++;
    }
    cout << ans;
}
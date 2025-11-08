#include <bits/stdc++.h>

using namespace std;

vector<int> v[2201];
int ans[3];

int check(int x, int y, int n)
{
    bool op = 0;
    int tmp = v[x][y];
    for(int i=x; i<x+n; i++)
    {
        for(int j=y; j<y+n; j++)
        {
            if(v[i][j] != tmp)
            {
                op = 1;
                break;
            }
        }
    }
    if(!op)
    {
        if(tmp == -1)
            ans[0]++;
        else if(tmp == 0)
            ans[1]++;
        else
            ans[2]++;
        return 0;
    }
    return 1;    
}

void solve(int x, int y, int n)
{
	if(n == 1)
    	return;
    int gap = n/3;
    
    for(int i=x; i<x+n; i+=gap)
    {
        for(int j=y; j<y+n; j+=gap)
        {
            if(check(i, j, gap))
                solve(i, j, gap);
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, val;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> val;
            v[i].push_back(val);
        }
    }
    if(check(0, 0, n))
    	solve(0, 0, n);
    for(int i=0; i<3; i++)
        cout << ans[i] << '\n';
}
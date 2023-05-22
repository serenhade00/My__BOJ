#include <bits/stdc++.h>

using namespace std;

string graph[65];

void solve(int n, int r, int c, bool open, bool close)
{
	if(n == 1)
	{	
		if(open)
			cout << "(";
		cout << graph[r][c];
		if(close)
			cout << ")";
		return;
	}
	
	if(open)
		cout << "(";
    int half = n/2;
    
    bool op = 0;
    int st = graph[r][c] - '0';
    
    for(int i=r; i<=r+n-1; i++)
    {
    	for(int j=c; j<=c+n-1; j++)
    	{
    		if(graph[i][j]-'0' != st)
    			op = 1;
    	}
    }
    if(!op)
    	cout << st;
    else
    {
    	solve(n/2, r, c, 1, 0), solve(n/2, r, c+half, 0, 0), 
    	solve(n/2, r+half, c, 0, 0), solve(n/2, r+half, c+half, 0, 1);
    }
    if(close)
		cout << ")";
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    	cin >> graph[i];
    
    solve(n, 1, 0, 0, 0);
}
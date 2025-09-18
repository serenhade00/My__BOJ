#include <bits/stdc++.h>

using namespace std;

int n, m;
int num[7];
int tmp[7];

void dfs(int cnt)
{
    if(cnt == m)
    {
        for(int i=0; i<m; i++)
        	cout << tmp[i] << ' ';
        cout << '\n';
        return;
    }
    
    for(int i=0; i<n; i++)
    {
    	tmp[cnt] = num[i];
    	dfs(cnt+1);
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> num[i];
    sort(num, num+n);
    
    dfs(0);
}
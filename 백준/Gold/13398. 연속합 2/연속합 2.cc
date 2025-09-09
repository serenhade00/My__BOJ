#include <bits/stdc++.h>

using namespace std;

int d[100001][2];
int num[100001];
int main(void)
{
    int n, ans = -1001, mx = -1001;
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> num[i];
    
    d[1][0] = num[1]; 
    for(int i=2; i<=n; i++)
    {
        d[i][0] = max(d[i-1][0]+num[i], num[i]);
        d[i][1] = max(d[i-1][0], d[i-1][1] + num[i]);
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=1; j++)
            ans = max(ans, d[i][j]);
        mx = max(mx, num[i]);
    }
    if(mx < 0)
    	cout << mx;
    else
    	cout << ans;
}
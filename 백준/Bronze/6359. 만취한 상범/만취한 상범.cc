#include <bits/stdc++.h>

using namespace std;

void solve(int n)
{
    int ans = 0;
    vector<int> num(n+1, 0);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
        	if(j % i == 0)
        		num[j] ^= 1;
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(num[i])
            ans++;
    }
    cout << ans << '\n';
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, n;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        solve(n);
    }
}
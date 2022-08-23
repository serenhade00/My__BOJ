#include <bits/stdc++.h>

using namespace std;

int egg[1001];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    int mx = 0;
    int val = 0;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        cin >> egg[i];
    }
    sort(egg, egg+m);
    
    for(int i=0; i<m; i++)
    {
        if(egg[i]*(m-i) > mx && (m-i) <= n)
        {
        	mx = egg[i]*(m-i);
        	val = egg[i];
        }
        
    }
    cout << val << ' ' << mx;
}
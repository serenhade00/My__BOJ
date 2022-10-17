#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    long long mx = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int a, d, g;
        
        cin >> a >> d >> g;
        long long ans = a*(d+g);
        if(a == (d+g))
            ans *= 2;
        
        mx = max(mx, ans);
    }
    cout << mx;
}
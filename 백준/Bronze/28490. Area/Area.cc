#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, mx = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin >> a >> b;
        mx = max(mx, a*b);
    }
    cout << mx;
}
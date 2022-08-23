#include <bits/stdc++.h>

using namespace std;

int t[1500001];
int p[1500001];
int d[1500001];

int main(void)
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> t[i] >> p[i];
    }
    for(int i=n; i>=1; i--)
    {
        int tmp = i + t[i];
        if(tmp > n+1)
            d[i] = d[i+1];
        else
            d[i] = max(d[i+1], d[tmp]+p[i]);
        
    }
    cout << d[1];
}
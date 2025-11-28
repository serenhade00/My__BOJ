#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int p, m, c, x, mn = 1e10+1;
    cin >> p >> m >> c >> x;
    for(int i=1; i<=p; i++)
    {
        for(int j=1; j<=m; j++)
        {
            for(int k=1; k<=c; k++)
            {
                if(abs((i+j)*(j+k) - x) < mn) 
                    mn = min(mn, abs((i+j)*(j+k) - x));
            }
        }
    }
    cout << mn;
}
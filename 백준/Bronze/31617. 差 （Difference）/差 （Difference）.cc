#include <bits/stdc++.h>

using namespace std;

int a[101];
int b[101];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int k, n, m, cnt = 0;
    cin >> k >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    cin >> m;
    for(int i=0; i<m; i++)
        cin >> b[i];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if((a[i] + k) == b[j])
                cnt++;
        }
    }
    cout << cnt;
}
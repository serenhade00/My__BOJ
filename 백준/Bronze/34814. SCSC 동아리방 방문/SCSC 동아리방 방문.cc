#include <bits/stdc++.h>

using namespace std;

int num[101];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, a, b, mx;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
        cin >> num[i];
    mx = *max_element(num+1, num+n+1);
    for(int i=0; i<m; i++)
    {
        cin >> a >> b;
        if(num[b] == mx)
            continue;
        num[a]--;
        mx = *max_element(num+1, num+n+1);
    }
    for(int i=1; i<=n; i++)
        cout << num[i] << ' ';
}
#include <bits/stdc++.h>

using namespace std;

int num[101];
int space[101];
int ans[101];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, a, b, c;
    cin >> n >> m;
    for(int i=1; i<=m; i++)
        cin >> num[i];
    
    for(int i=0; i<n; i++)
    {
        cin >> a >> b >> c;
        if(space[a] < num[a])
        {
            space[a]++;
            ans[i+1] = a;
        }
        else if(space[b] < num[b])
        {
            space[b]++;
            ans[i+1] = b;
        }
        else if(space[c] < num[c])
        {
            space[c]++;
            ans[i+1] = c;
        }
        else
            ans[i+1] = -1;
    }
    for(int i=1; i<=n; i++)
        cout << ans[i] << ' ';
}
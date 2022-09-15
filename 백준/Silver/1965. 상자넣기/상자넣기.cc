#include <bits/stdc++.h>

using namespace std;

int num[1001];
int d[1001];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    int ans = 1;
    cin >> n;
    fill(d, d+n, 1);
    for(int i=1; i<=n; i++)
        cin >> num[i];
    for(int i=1; i<=n; i++)
    {
        int cur = num[i];
        for(int j=1; j<i; j++)
        {
            if(num[j] < cur)
            {
                d[i] = max(d[j]+1, d[i]);
            }
        }
        ans = max(ans, d[i]);
    }
    cout << ans;
}
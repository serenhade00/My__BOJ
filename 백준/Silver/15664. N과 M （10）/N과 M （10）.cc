#include <bits/stdc++.h>

using namespace std;

int n, m;
int num[10];
int ans[10];
bool vis[10];

void backtrack(int cur, int idx)
{
    if(cur == m)
    {
        for(int i=0; i<m; i++)
            cout << ans[i] << ' ';
        cout << '\n';
        return;
    }
    int prev = -1;
    for(int i=idx; i<n; i++)
    {
        if(vis[i] || prev == num[i])
            continue;
        vis[i] = 1;
        ans[cur] = num[i];
        prev = num[i];
        backtrack(cur+1, i+1);
        vis[i] = 0;
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> num[i];
    sort(num, num+n);
    backtrack(0, 0);
}
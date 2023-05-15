#include <bits/stdc++.h>

using namespace std;

int n, mn = 100001;
int score[21][21];
int vis[21];

void backtrack(int cnt, int st)
{
    if(cnt == n / 2)
    {
        int t1 = 0, t2 = 0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(vis[i] && vis[j])
                    t1 += score[i][j];
                if(!vis[i] && !vis[j])
                    t2 += score[i][j];
            }
        }
        mn = min(mn, abs(t1-t2));
        return;
    }
    for(int i=st; i<=n; i++)
    {
        vis[i] = 1;
        backtrack(cnt+1, i+1);
        vis[i] = 0;
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            cin >> score[i][j];
    }
    
    backtrack(0, 1);
    cout << mn;
}
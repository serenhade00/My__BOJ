#include <bits/stdc++.h>

using namespace std;

int vis[100001];

int dx[2] = {-1, 1};
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    queue<int> q;
    q.push(n);
    vis[n] = 1;
    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();
        
        int tp = cur;
        while(tp <= 50000)
        {
            tp *= 2;
            if(vis[tp])
            	break;
            vis[tp] = vis[cur];
            q.push(tp);
        }
        
        if(vis[m])
        {
            cout << vis[m]-1;
            return 0;
        }
        for(int i=0; i<2; i++)
        {
            int nx = cur + dx[i];
            if(nx < 0 || nx > 100000 || vis[nx])
                continue;
            vis[nx] = vis[cur] + 1;
            q.push(nx);
        }
        if(vis[m])
        {
            cout << vis[m]-1;
            return 0;
        }
    }
}
#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

// 비용, 정점 번호
vector<pair<int,int>> edge[501];
priority_queue<tuple<int,int,int>, 
               vector<tuple<int,int,int>>,
               greater<tuple<int,int,int>>> pq;
bool chk[501];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, cost, num = 1;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> cost;
        edge[i].push_back({cost, n+1});
        edge[n+1].push_back({cost, i});
    }
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin >> cost;
           
            edge[i].push_back({cost, j});
        }
    }
    
    chk[1] = 1;
    for(auto nxt : edge[1])
        pq.push({nxt.X, 1, nxt.Y});
  
    int v = 0, sum = 0;
    while(v < n)
    {
        int cost, a, b;
        tie(cost, a, b) = pq.top();
        pq.pop();
        if(chk[b])
            continue;
        chk[b] = 1;
        for(auto nxt : edge[b])
        {
            if(!chk[nxt.Y])
                pq.push({nxt.X, b, nxt.Y});
        }
        v++;
        sum += cost;
    }
    cout << sum;
}
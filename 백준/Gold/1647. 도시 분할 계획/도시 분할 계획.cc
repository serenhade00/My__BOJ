#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

// 비용, 정점 번호
vector<pair<int,int>> edge[100005];
priority_queue<pair<int,int>,
               vector<pair<int,int>>,
               greater<pair<int,int>>> pq;
bool chk[100005];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int v, e, st, en, cost;
    cin >> v >> e;
    for(int i=0; i<e; i++)
    {
        cin >> st >> en >> cost;
        edge[st].push_back({cost, en});
        edge[en].push_back({cost, st});
    }
    
    chk[1] = 1;
    for(auto nxt : edge[1])
        pq.push({nxt.X, nxt.Y});
    
    int cnt = 0;
    int mx = 0;
    long long sum = 0;
    while(cnt < v-1)
    {
        int cost, cur;
        tie(cost, cur) = pq.top();
        pq.pop();
        
        if(chk[cur])
            continue;
        chk[cur] = 1;
        for(auto nxt : edge[cur])
        {
            if(!chk[nxt.Y])
                pq.push({nxt.X, nxt.Y});
        }
        cnt++;
        sum += cost;
        mx = max(mx, cost);
    }
    cout << sum - mx;
}
#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

pair<double, double> coord[105];
vector<pair<double,int>> edge[1005];
priority_queue<pair<double,int>,
               vector<pair<double,int>>,
               greater<pair<double,int>>> pq;
bool chk[1005];

double cal_dist(pair<double, double> &a, pair<double, double> &b)
{
    return sqrt((b.X-a.X)*(b.X-a.X)+(b.Y-a.Y)*(b.Y-a.Y));
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> coord[i].X >> coord[i].Y;
    
    for(int i=2; i<=n; i++)
    {
        for(int j=1; j<i; j++)
        {
            edge[i].push_back({cal_dist(coord[i], coord[j]), j});
            edge[j].push_back({cal_dist(coord[i], coord[j]), i});
        }
    }
    
    chk[1] = 1;
    for(auto nxt : edge[1])
        pq.push({nxt.X, nxt.Y});
    
    int cnt = 0;
    double sum = 0;
    while(cnt < n-1)
    {
        double cost;
        int cur;
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
    }
    cout << fixed;
    cout.precision(2);
    cout << sum;
}
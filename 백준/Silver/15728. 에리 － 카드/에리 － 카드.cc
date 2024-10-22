#include <bits/stdc++.h>

using namespace std;
    
int a[101];
int b[101];
bool num[20001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k, cnt = 0;
    cin >> n >> k;
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<n; i++)
        cin >> b[i];
    
    priority_queue<pair<int,int>> pq;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            pq.push({a[i]*b[j], b[j]});
    }
    while(!pq.empty())
    {
        int cur = pq.top().first;
        int card = pq.top().second;
        pq.pop();
        if(!num[card+10000])
        {
            cnt++;
            num[card+10000] = 1;
        }
        if(cnt > k)
        {
            cout << cur;
            return 0;
        }
    }
}
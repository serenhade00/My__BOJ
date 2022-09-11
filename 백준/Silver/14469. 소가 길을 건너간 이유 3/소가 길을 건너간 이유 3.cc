#include <bits/stdc++.h>

using namespace std;

pair<int,int> cow[101];
bool vis[101];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    int sum = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> cow[i].first >> cow[i].second;
        sum += cow[i].second;
    }
    
    sort(cow, cow+n);
    
    int tmp_time = cow[0].first+cow[0].second;
    int mx_time = cow[n-1].first;
    
    int cnt = 1;
    vis[0] = 1;
    while(tmp_time < mx_time)
    {
        int idx;
        for(int i=1; i<n; i++)
        {
            if(cow[i].first <= tmp_time && !vis[i])
            {
            	idx = i;
            	break;
            }
            if(cow[i].first > tmp_time && !vis[i])
            {
            	idx = i;
            	tmp_time = cow[i].first;
            	break;
            }
        }
        tmp_time += cow[idx].second;
        vis[idx] = 1;
        cnt++;
    }
    for(int i=1; i<n; i++)
    {
        if(!vis[i])
            tmp_time += cow[i].second;
    }
    cout << tmp_time;
    
}
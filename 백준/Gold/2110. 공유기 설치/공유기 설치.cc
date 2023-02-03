#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> route;
    int n, c;
    int val;
    cin >> n >> c;
    for(int i=0; i<n; i++)
    {
        cin >> val;
        route.push_back(val);
    }
    sort(route.begin(), route.end());
    int st = 0, en = route[n-1];
    int mid, dist;
    int cur = 0;
    while(st <= en)
    {
        int cnt = 1;
        int cur = 0;
        mid = (st+en+1)/2;
        for(int i=1; i<n; i++)
        {
            dist = route[i]-route[cur];
            if(dist >= mid)
            {
                cur = i;
                cnt++;
            }
        }
        
        if(cnt >= c)
            st = mid+1;
        else
            en = mid-1;
        
    }
    cout << en;
    
}
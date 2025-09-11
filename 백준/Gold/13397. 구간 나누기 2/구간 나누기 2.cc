#include <bits/stdc++.h>

using namespace std;

int n, m;
int num[5001];

bool check(int x)
{
    int cnt = 0;
    int cur_mx = num[0], cur_mn = num[0];
    for(int i=1; i<n; i++)
    {
        cur_mx = max(cur_mx, num[i]);
        cur_mn = min(cur_mn, num[i]);
        if(cur_mx - cur_mn <= x)
            continue;
        else
        {
            cur_mx = num[i], cur_mn = num[i];
            cnt++;
        }
    }
    cnt++;
    if(cnt <= m)
        return true;
    else
        return false;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int st, en;
    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> num[i];
    
    st = -1, en = 10000;
    while(st+1 < en)
    {
        int mid = (st+en)/2;
        if(check(mid))
            en = mid;
        else
            st = mid;
    }
    cout << en;
}
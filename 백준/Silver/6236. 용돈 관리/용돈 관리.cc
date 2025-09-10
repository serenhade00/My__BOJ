#include <bits/stdc++.h>

using namespace std;

int n, m;
int num[100001];

bool check(long long x)
{
    int cnt = 1;
    long long cur_money = x;
    for(int i=0; i<n; i++)
    {
        if(cur_money >= num[i])
            cur_money -= num[i];
        else
        {
            cur_money = x - num[i];
            cnt++;
        }
    }
    if(cnt <= m)
        return true;
    else
        return false;
}    
    
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long st, en;
    int mx = 0;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> num[i];
        mx = max(mx, num[i]);
    }
    
    st = mx-1, en = 1e10;
    while(st+1 < en)
    {
        long long mid = (st+en)/2;
        if(check(mid))
            en = mid;
        else
            st = mid;
    }
    cout << en;
}
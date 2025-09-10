#include <bits/stdc++.h>

using namespace std;

int n, m, l;
int num[101];
int gap[105];

bool check(int x)
{
    int cnt = 0;
    for(int i=0; i<n+1; i++)
    {
        int cur = gap[i];
        while(cur > x)
        {
            cur -= x;
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
    
    int st, en, val;
    cin >> n >> m >> l;
    for(int i=0; i<n; i++)
        cin >> num[i];
    sort(num, num+n);
    gap[0] = num[0];
    for(int i=1; i<=n-1; i++)
        gap[i] = num[i] - num[i-1];
    gap[n] = l - num[n-1];
    st = 0, en = 501;
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
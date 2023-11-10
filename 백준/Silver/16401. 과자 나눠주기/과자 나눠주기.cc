#include <bits/stdc++.h>

using namespace std;

int cookie[1000001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; i++)
        cin >> cookie[i];
    sort(cookie, cookie+m);
    int st = 0, en = 1000000001;
    while(st+1 < en)
    {
        int cnt = 0;
        int mid = (st+en)/2;
        for(int i=m-1; i>=0; i--)
        {
            cnt += cookie[i] / mid;
            if(cookie[i] < mid)
                break;
        }
        if(cnt >= n)
            st = mid;
        else
            en = mid;
    }
    cout << st;
}
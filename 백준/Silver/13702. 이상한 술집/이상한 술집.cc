#include <bits/stdc++.h>
#define INT_MAX numeric_limits<int>::max()
using namespace std;

int cookie[1000001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> cookie[i];
    sort(cookie, cookie+n);
    long long st = 0, en = INT_MAX;
    while(st+1 < en)
    {
        long long cnt = 0;
        long long mid = (st+en)/2;
        for(int i=n-1; i>=0; i--)
        {
            cnt += cookie[i] / mid;
            if(cookie[i] < mid)
                break;
        }
        if(cnt >= m)
            st = mid;
        else
            en = mid;
    }
    cout << st;
}
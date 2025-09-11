#include <bits/stdc++.h>

using namespace std;

int n, m;
long long num[1000001];

bool check(long long x)
{
    long long cnt = 0;
    for(int i=0; i<n; i++)
        cnt += num[i] / x;
    if(cnt >= m)
        return true;
    else
        return false;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long st, en, sum = 0;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
    	cin >> num[i];
    	sum += num[i];
    }
    st = 0, en = 1e15+1;
    while(st+1 < en)
    {
        long long mid = (st+en)/2;
        if(check(mid))
            st = mid;
        else
            en = mid;
    }
    cout << sum - st * m;
}
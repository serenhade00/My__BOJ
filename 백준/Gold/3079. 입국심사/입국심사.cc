#include <bits/stdc++.h>

using namespace std;

int n, m;
long long t[100001];

bool check(long long cur_time)
{
    long long sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += cur_time/t[i];
        if(sum >= m)
            return 1;
    }
    return 0;
}
void solve()
{
    long long st = 0, en = 1e18;
    long long mid;
    while(st+1 < en)
    {
        mid = (st+en)/2;
        if(check(mid))
            en = mid;
        else
            st = mid;
    }
    cout << en;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> t[i];
    solve();
}
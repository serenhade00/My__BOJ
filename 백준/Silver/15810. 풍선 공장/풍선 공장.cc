#include <bits/stdc++.h>

using namespace std;

int num[1000001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    long long st = 0, en = 1000000000001;
    for(int i=0; i<n; i++)
        cin >> num[i];
    while(st+1 < en)
    {
        long long t = 0;
        long long mid = (st+en)/2;
        for(int i=0; i<n; i++)
            t += mid / num[i];
        if(t >= m)
            en = mid;
        else
            st = mid;
    }
    cout << en;
}
#include <bits/stdc++.h>

using namespace std;

int num[1000001];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    cin >> n >> k;
    for(int i=0; i<n; i++)
        cin >> num[i];
    long long st = 0, en = 2000000001;
    while(st+1 < en)
    {
        long long mid = (st+en)/2;
        long long sum = 0;
        for(int i=0; i<n; i++)
        {
            if(mid > num[i])
                sum += mid - num[i];
        }
        if(sum > k)
            en = mid;
        else
            st = mid;
    }
    cout << st;
}
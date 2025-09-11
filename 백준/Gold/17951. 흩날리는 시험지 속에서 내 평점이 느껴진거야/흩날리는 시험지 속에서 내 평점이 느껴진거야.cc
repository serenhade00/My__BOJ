#include <bits/stdc++.h>

using namespace std;

int n, k;
int num[100001];

bool check(int x)
{
    int cnt = 0, tmp = 0;
    for(int i=0; i<n; i++)
    {
        tmp += num[i];
        if(tmp > x)
        {
            cnt++;
            tmp = 0;
        }
    }
    cnt++;
    if(cnt > k)
        return true;
    else
        return false;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int st, en;
    cin >> n >> k;
    for(int i=0; i<n; i++)
        cin >> num[i];
    
    st = -1, en = 2000001;
    while(st+1 < en)
    {
        int mid = (st+en)/2;
        if(check(mid))
            st = mid;
        else
            en = mid;
    }
    cout << en;
}
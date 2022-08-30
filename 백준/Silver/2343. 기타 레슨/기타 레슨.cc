#include <bits/stdc++.h>

using namespace std;

int video[100001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    int st, en;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> video[i];
        en += video[i];
    }
    st = *max_element(video, video+n);

    while(st <= en)
    {
        int tmp = 0, cnt = 0;
        int mid = (st+en)/2;
        for(int i=0; i<n; i++)
        {
            tmp += video[i];
            if(tmp > mid)
            {
                tmp = 0;
                tmp += video[i];
                cnt++;
            }
        }
        if(tmp > 0)
        	cnt++;
        if(cnt > m)
            st = mid+1;
        else
            en = mid-1;
    }
    cout << st;
}
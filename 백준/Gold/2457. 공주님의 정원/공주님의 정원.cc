#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int flower[1301];

int solve()
{
    int i = 0, st = 101, en = 301, cnt = 0;
    while(1)
    {
        int mx = 0;
        while(i <= en)              // 시작 시간이 이전 꽃 종료보다 작은 동안
        {
            if(flower[i] > mx)      // 종료 시간이 길수록 이득
                mx = flower[i];
            i++;
        }
        if(mx <= en)                // 최대 종료 시간이 이전 꽃보다 작으면 불가능
            return 0;
        cnt++;
        if(mx > 1130)               // 11.30일 지나면 최솟값 리턴
            return cnt;
        en = mx;                    // 현재 꽃 종료 시간 갱신
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, st_m, st_d, en_m, en_d;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        cin >> st_m >> st_d >> en_m >> en_d;
        int st = st_m*100+st_d, en = en_m*100+en_d;
        if(flower[st] < en)
            flower[st] = en;
    }

    cout << solve();
}
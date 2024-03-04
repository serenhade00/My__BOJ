#include <bits/stdc++.h>

using namespace std;

int num[1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    string tmp;
    long long val, ans, cnt = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> tmp >> val;
        if(val > 1000)
        {
            cnt++;
            continue;
        }
        else
            num[val]++;
        if(tmp == "jinju")
            ans = val;
    }
    for(int i=0; i<1001; i++)
    {
    	if(num[i] && i > ans)
    		cnt += num[i];
    }
    cout << ans << '\n' << cnt;
}
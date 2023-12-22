#include <bits/stdc++.h>

using namespace std;

long long num[500001];
long long dp_front[500001];
long long dp_back[500001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    long long ans = 1000000001;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> num[i];
    sort(num, num+n);
    dp_front[1] = num[1]-num[0], dp_back[2] = num[2]-num[1];
    for(int i=3; i<n; i+=2)
    {
        dp_front[i] = dp_front[i-2] + num[i]-num[i-1];
        dp_back[i+1] = dp_back[i+1-2] + num[i+1]-num[i]; 
    }
    ans = min(ans, num[2]-num[0] + dp_back[n-1]-dp_back[2]);
    for(int i=4; i<n; i+=2)
    {
        long long tmp;
        tmp = num[i]-num[i-2] + dp_front[i-3] + dp_back[n-1] - dp_back[i];
        ans = min(tmp, ans);
    }
    cout << ans;
}
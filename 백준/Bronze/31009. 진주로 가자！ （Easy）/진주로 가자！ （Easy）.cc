#include <bits/stdc++.h>

using namespace std;

int num[1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    string tmp;
    long long val, ans;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> tmp >> num[i];
        if(tmp == "jinju")
            ans = num[i];
    }
    sort(num, num+n);
    cout << ans << '\n' << n-(upper_bound(num, num+n, ans)-num);
}
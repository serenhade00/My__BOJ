#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll N, i, now, mn = 2e9, ans = 0;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> now;
        ans += max((ll)(0), now - mn);
        mn = min(mn, now);
    }
    cout << ans;
}
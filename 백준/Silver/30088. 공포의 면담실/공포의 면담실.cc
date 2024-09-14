#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n;
vector<ll> v;

void solve()
{
    sort(v.begin(), v.end());

    ll ans = 0;
    for (int i = 0; i< n; i++)
        ans += v[i] * (n - i);
    cout << ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num; cin >> num;
        ll sum = 0;
        while (num--)
        {
            ll t; cin >> t;
            sum += t;
        }
        v.push_back(sum);
    }
    solve();
}
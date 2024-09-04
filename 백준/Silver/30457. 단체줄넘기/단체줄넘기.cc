#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cnt[1010];
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    ll ans = 0;
    for(ll i=0;i<n;i++){
        ll p; cin >> p;
        cnt[p]++;
        if(cnt[p]<=2) ans++;
    }
    cout << ans;
}
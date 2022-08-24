#include <bits/stdc++.h>
#include <cmath>
#define ll long long

using namespace std;

map<ll, ll> m;
ll n, p, q;

ll dp(ll num)
{
	ll num1, num2;
    
    if(m.find(num) != m.end())
		return m[num];
    
    return m[num] = dp(num/p) + dp(num/q);
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
    cin >> n >> p >> q;
    m[0] = 1;
    m[1] = 2;
    cout << dp(n);
}
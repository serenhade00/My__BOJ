#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, s, mx = 0; 
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        mx = max(mx, t);
    }
    cout << (1LL * mx * s + 999) / 1000 << '\n';
}
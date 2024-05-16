#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t, d, m;
    cin >> t >> d >> m;
    int cur = 0;
    bool op = 0;
    for (int i = 0; i < m; ++i) {
        int k;
        cin >> k;
        if (k - cur >= t) {
            op = 1;
        }
        cur = k;
    }
    if (d - cur >= t) {
        op = 1;
    }
    cout << (op ? "Y" : "N");
}
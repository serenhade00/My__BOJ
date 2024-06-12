#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, r, m, cnt = 0;
    cin >> t >> r;
    for (int i = 0; i < t; ++i) {
        cin >> m;
        cnt += (m < r ? -1 : m > r ? 1 : 0);
    }
    cout << (cnt == 0 ? 0 : cnt < 0 ? 1 : 2);
}
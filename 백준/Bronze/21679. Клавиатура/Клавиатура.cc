#include <bits/stdc++.h>

using namespace std;
int cnt[100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, k;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> cnt[i];
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> k;
        --cnt[k];
    }
    for (int i = 1; i <= n; ++i) {
        cout << (cnt[i] >= 0 ? "no" : "yes") << "\n";
    }
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << string(n + 2, '@') << "\n";
    for (int i = 0; i < n; ++i) {
        cout << "@" << string(n, ' ') << "@\n";
    }
    cout << string(n + 2, '@') << "\n";
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int sa = 0, sb = 0, sc = 0;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        sa += a, sb += b; sc += c;
        if (sa < 30 || sb < 30 || sc < 30) {
            cout << "NO\n";
        }
        else {
            int mn = sa;
            mn = min(mn, sb);
            mn = min(mn, sc);
            cout << mn << '\n';
            sa -= mn, sb -= mn, sc -= mn;
        }
    }
}
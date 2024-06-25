#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t1, t2, t3, t4, t5, t6, br;
    cin >> t1 >> t2 >> t3 >> t4 >> t5 >> br >> t6;
    int ans = t1 * 60 + t2 - (t3 + t4 * 60 + t5 + (br + 1) * t6) - 10;
    cout << setw(2) << setfill('0') << ans / 60 << " " << setw(2) << setfill('0') << ans % 60;
}
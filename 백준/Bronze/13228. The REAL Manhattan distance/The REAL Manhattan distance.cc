#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, f1, c, d, f2;
        cin >> a >> b >> f1 >> c >> d >> f2;
        cout << f1 + f2 + abs(a - c) + abs(b - d) << '\n';
    }
}
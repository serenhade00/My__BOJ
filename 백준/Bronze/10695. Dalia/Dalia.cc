#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a, b, c, d, e; 
        cin >> a >> b >> c >> d >> e;
        int t1 = abs(b - d);
        int t2 = abs(e - c);
        cout << "Case " << i << ": " << (t1 == 1 && t2 == 2 || t1 == 2 && t2 == 1 ? "YES" : "NO") << '\n';
    }
}
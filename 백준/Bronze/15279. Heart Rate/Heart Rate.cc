#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    double x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        cout << fixed << setprecision(12) << 60 * (x - 1) / y << " " << 60 * x / y << " " << 60 * (x + 1) / y << "\n";
    }
}
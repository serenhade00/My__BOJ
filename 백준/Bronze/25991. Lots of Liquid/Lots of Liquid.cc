#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    double x, sum = 0;
    cin >> T;
    while (T--) {
        cin >> x;
        sum += x * x * x;
    }
    cout << fixed << setprecision(10) << cbrt(sum);
    return 0;
}
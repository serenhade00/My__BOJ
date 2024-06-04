#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; 
    cin >> n;
    while (n--) {
        double a, b; a = b = 0;
        vector<double> v(3), w(3);
        for (int i = 0; i < 3; i++) 
            cin >> v[i];
        for (int i = 0; i < 3; i++) 
            cin >> w[i];
        for (int i = 0; i < 3; i++) {
            a += v[i] * w[(i + 1) % 3];
            b += v[i] * w[(i + 2) % 3];
        }
        cout << (a != b ? a < b ? "GOSIA" : "ADAM" : "=") << '\n';
    }
}
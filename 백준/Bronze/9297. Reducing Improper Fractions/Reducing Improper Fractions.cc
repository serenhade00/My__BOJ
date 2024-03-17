#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; 
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a, b; 
        cin >> a >> b;
        cout << "Case " << i << ":";
        if (!a) {
            cout << ' ' << 0 << '\n';
        }
        else {
            if (a / b) {
                cout << ' ' << a / b;
            }
            if (a % b) {
                cout << ' ' << a % b << '/' << b;
            }
            cout << '\n';
        }
    }
}
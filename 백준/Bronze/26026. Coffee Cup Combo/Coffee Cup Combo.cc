#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, d = 0, has = 0;
    cin >> t;
    while (t--) {
        char c;
        cin >> c;
        if (c == '1') {
            has = 2;
            ++d;
        } else if (has > 0) {
            --has;
            ++d;
        }
    }
    cout << d;
}
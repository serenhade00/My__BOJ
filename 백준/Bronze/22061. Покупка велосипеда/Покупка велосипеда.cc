#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b, c;
    cin >> n;
    while(n--) {
        cin >> a >> b >> c;
        cout << (c & 1 and !a or a + 2 * b < c ? "NO" : "YES") << "\n"; 
    }
}
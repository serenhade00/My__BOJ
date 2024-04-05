#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        ans += b > a ? (b - a) * c : 0;
    }
    cout << ans;
}
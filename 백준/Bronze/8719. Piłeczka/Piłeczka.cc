#include <bits/stdc++.h>

using namespace std;
const int INF = 1e9;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; 
    cin >> t;
    while (t--) {
        int a, b, cnt = 0; 
        cin >> a >> b;
        while (a < b) {
            cnt++;
            a <<= 1;
        }
        cout << cnt << '\n';
    }
}
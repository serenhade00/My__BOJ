#include <bits/stdc++.h>

using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;
    while (n--) {
        string s; cin >> s;
        regex rr(".*?CD.*?");
        if (!regex_match(s, rr)) {
            cnt++;
        }
    }
    cout << cnt;
}
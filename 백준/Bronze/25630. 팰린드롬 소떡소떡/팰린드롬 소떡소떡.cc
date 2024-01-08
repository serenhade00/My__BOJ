#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, cnt = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.length() / 2; ++i) {
        if (s[i] != s[s.length() - i - 1]) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
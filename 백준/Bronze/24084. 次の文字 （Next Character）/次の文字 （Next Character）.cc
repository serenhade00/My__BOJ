#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.length() - 1; ++i) {
        if (s[i + 1] == 'J') {
            cout << s[i] << "\n";
        }
    }
}
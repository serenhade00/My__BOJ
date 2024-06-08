#include <bits/stdc++.h>

using namespace std;

int main() {
    char c;
    int t;
    cin >> c >> t;
    set<char> S;
    S.insert(c);
    while (t--) {
        char c1, c2;
        cin >> c1 >> c2;
        if (c2 == c) {
            c = c1;
            S.insert(c1);
        }
    }
    cout << c << "\n" << S.size();
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n & 1) {
        n = n / 2 + 1;
    }
    cout << n;
}
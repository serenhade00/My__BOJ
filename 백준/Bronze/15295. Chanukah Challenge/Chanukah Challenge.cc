#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, K, N;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> K >> N;
        cout << K << " " << N * (N + 1) / 2 + N << "\n";
    }
}
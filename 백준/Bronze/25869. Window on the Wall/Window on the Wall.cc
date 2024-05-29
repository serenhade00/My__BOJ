#include <bits/stdc++.h>

using namespace std;

int main() {
    int w, h, d;
    cin >> w >> h >> d;
    cout << (2 * d > w || 2 * d > h ? 0 : (w - 2 * d) * (h - 2 * d));
}
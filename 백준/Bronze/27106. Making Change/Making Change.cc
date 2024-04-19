#include <bits/stdc++.h>

using namespace std;

int main() {
    int p;
    cin >> p;
    p = 100 - p;
    cout << p / 25;
    p %= 25;
    cout << " " << p / 10;
    p %= 10;
    cout << " " << p / 5;
    p %= 5;
    cout << " " << p;
}
#include<iostream>
using namespace std;
int main() {
    int d, h, m;
    cin >> d >> h >> m;
    int x = 11 * 60 * 24 + 11 * 60 + 11;
    int y = d * 60 * 24 + 60 * h + m - x; 
    if (y < 0) cout << -1 << '\n';
    else cout << y << '\n';
}
#include <iostream>
using namespace std;

int A, B, C;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> A >> B >> C;
    if (A + B + C <= 21) cout << 1;
    else cout << 0;
}
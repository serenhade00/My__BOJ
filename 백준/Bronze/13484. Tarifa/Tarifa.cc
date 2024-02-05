#include<iostream>
using namespace std;
int main() {
    int x, n, p, sum = 0;
    cin >> x >> n;
    for (int i = 0; i < n; i++) {
        cin >> p;
        sum += (x - p);
    }
    cout << sum+x << '\n';
}
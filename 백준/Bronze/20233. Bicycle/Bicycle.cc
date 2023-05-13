#include<iostream>
using namespace std;
int main() {
    int a, x, b, y, t, s1 = 0, s2 = 0;
    cin >> a >> x >> b >> y >> t;
    if (t > 30) s1 = a + (t - 30) * x * 21;
    else s1 = a;
    if (t > 45) s2 = b + (t - 45) * y * 21;
    else s2 = b;
    cout << s1 << " " << s2;
}
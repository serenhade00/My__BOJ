#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a1, a2, a3, b1, b2, b3, sum = 0;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    vector<long long> v1{a1, a2, a3}, v2{b1, b2, b3};
    sort(v1.rbegin(), v1.rend());
    sort(v2.rbegin(), v2.rend());
    for (int i = 0; i < 3; ++i) {
        sum += v1[i] * v2[i];
    }
    cout << sum;
}
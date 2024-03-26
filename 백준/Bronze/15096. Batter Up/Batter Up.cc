#include <bits/stdc++.h>

using namespace std;
int main() {
    int t; 
    cin >> t;
    double nu = 0, de = 0;
    while (t--) {
        int n; 
        cin >> n;
        if (n != -1) {
            de++;
            nu += n;
        }
    }
    cout << fixed << setprecision(4) << nu / de;
}
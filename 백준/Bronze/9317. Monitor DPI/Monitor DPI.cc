#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    double D;
    int RH, RV;
    while (1) {
        cin >> D >> RH >> RV;
        if (!D && !RH && !RV) {
            break;
        }
        cout << "Horizontal DPI: " << fixed << setprecision(2) << RH / (16 * D / sqrt(337)) << "\n";
        cout << "Vertical DPI: " << fixed << setprecision(2) << RV / (9 * D / sqrt(337)) << "\n";
    }
}
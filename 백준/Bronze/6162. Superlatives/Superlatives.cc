#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        int a, b; 
        cin >> a >> b;
        int cnt = 0;
        while (a > b) {
            cnt++;
            b *= 5;
        }
        cout << "Data Set " << i << ":\n";
        if (!cnt) {
            cout << "no drought" << '\n';
        }
        else {
            for (int j = 0; j < cnt - 1; j++) {
                cout << "mega ";
            }
            cout << "drought" << '\n';
        }
        cout << '\n';
    }
}
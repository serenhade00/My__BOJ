#include <bits/stdc++.h>

using namespace std;

struct Ribbon {
  int pos, len;
  char color;
};

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<Ribbon> ribbons(n);

    for (int i = 0; i < n; i++) cin >> ribbons[i].pos;
    for (int i = 0; i < n; i++) cin >> ribbons[i].len;
    for (int i = 0; i < n; i++) cin >> ribbons[i].color;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(ribbons[i].pos - ribbons[j].pos) <= ribbons[i].len + ribbons[j].len &&
                ribbons[i].color != ribbons[j].color) {
                cout << "YES\n" << i + 1 << " " << j + 1 << "\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
}
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int cntCase; cin >> cntCase;

  for (int t = 0; t < cntCase; t++) {
    int n; cin >> n;

    vector<int> w(n);
    for (int i = 0; i < n; i++)
      cin >> w[i];

    int to = 0;
    for (int i = 0; i < n; i++)
      to += 100 * w[i];

    if (to == 0) cout << "Equilibrium\n";
    else if (to > 0) cout << "Right\n";
    else cout << "Left\n";
  }
}
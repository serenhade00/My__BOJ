#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n; cin >> n;

  int maxCakes = 10001;
  for (int i = 0; i < n; i++) {
    int required, available; cin >> required >> available;
    maxCakes = min(maxCakes, available / required);
  }
  cout << maxCakes << "\n";
}
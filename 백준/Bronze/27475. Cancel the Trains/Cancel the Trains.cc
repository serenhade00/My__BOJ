#include <bits/stdc++.h>

using namespace std;

typedef vector<int> v;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int cntCase, n, m;
  cin >> cntCase;

  while (cntCase--) {
    cin >> n >> m;

    v bottom(n), left(m);
    for (int i = 0; i < n; i++)
      cin >> bottom[i];

    for (int i = 0; i < m; i++)
      cin >> left[i];

    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (binary_search(left.begin(), left.end(), bottom[i]))
        ans++;
    }
    cout << ans << "\n";
  }
}
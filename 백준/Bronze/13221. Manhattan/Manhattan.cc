#include <bits/stdc++.h>

using namespace std;

struct Taxi {
  int x, y, dist;
};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int x, y, n; cin >> x >> y >> n;

  vector<Taxi> taxis(n);
  for (int i = 0; i < n; i++) {
    cin >> taxis[i].x >> taxis[i].y;
    taxis[i].dist = abs(x - taxis[i].x) + abs(y - taxis[i].y);
  }

  sort(taxis.begin(), taxis.end(), [](const Taxi& a, const Taxi& b) { return a.dist < b.dist;});

  cout << taxis[0].x << " " << taxis[0].y << "\n";
}
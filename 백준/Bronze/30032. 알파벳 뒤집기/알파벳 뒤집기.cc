#include <bits/stdc++.h>

using namespace std;

char flip(char ch, int d) {
  if (d == 1) {
    if (ch == 'd') return 'q';
    if (ch == 'q') return 'd';
    if (ch == 'b') return 'p';
    if (ch == 'p') return 'b';
  } else {
    if (ch == 'd') return 'b';
    if (ch == 'b') return 'd';
    if (ch == 'q') return 'p';
    if (ch == 'p') return 'q';
  }

  return ch;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, d; cin >> n >> d;

  vector<string> grid(n);
  for (int i = 0; i < n; i++)
    cin >> grid[i];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      grid[i][j] = flip(grid[i][j], d);
  }

  for (int i = 0; i < n; i++)
    cout << grid[i] << "\n";
}
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n; cin >> n;

  string currentInitials, targetInitials;
  cin >> currentInitials >> targetInitials;

  int totalMoves = 0;
  for (int i = 0; i < n; i++) {
    int currentChar = currentInitials[i];
    int targetChar = targetInitials[i];
    int distance = abs(currentChar - targetChar);
    totalMoves += min(distance, 26 - distance);
  }
  cout << totalMoves << "\n";
}
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> coord(6);
  for (int i = 0; i < 6; i++) {
    string line; getline(cin, line);
    if (*(line.end() - 1) == ' ')
      line.pop_back();
    coord[i] = line.length();
  }

  cout << "Latitude " << coord[0] << ":" << coord[1] << ":" << coord[2] << "\n";
  cout << "Longitude " << coord[3] << ":" << coord[4] << ":" << coord[5] << "\n";
}
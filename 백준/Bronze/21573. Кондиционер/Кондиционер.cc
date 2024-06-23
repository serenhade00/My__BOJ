#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int troom, tcond;
  string mode;
  cin >> troom >> tcond >> mode;

  int result = troom;
  if (mode == "freeze") result = min(troom, tcond);
  else if (mode == "heat") result = max(troom, tcond);
  else if (mode == "auto") result = tcond;
  cout << result << "\n";
}
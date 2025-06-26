#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n; cin >> n;

  while (true) {
    string strNum = to_string(n);

    int sumDigits = 0;
    for (char c : strNum)
      sumDigits += c - '0';

    if (n % sumDigits == 0) {
      cout << n << "\n";
      break ;
    }
    n++;
  }
}
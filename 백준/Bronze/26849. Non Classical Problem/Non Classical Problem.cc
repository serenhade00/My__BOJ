#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;

  vector<double> numbers(n);
  double sum = 0;
  for (int i = 0; i < n; i++) {
    int a, b; cin >> a >> b;
    numbers[i] = static_cast<double>(a) / b;
    sum += numbers[i];
  }

  auto minMax = minmax_element(numbers.begin(), numbers.end());

  cout << fixed << setprecision(6);
  cout << *minMax.first << " " << *minMax.second << " " << sum << "\n";
}
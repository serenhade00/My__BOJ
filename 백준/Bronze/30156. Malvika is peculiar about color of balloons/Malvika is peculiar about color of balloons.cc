#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--){
      string s; cin >> s;
      cout << min(count(s.begin(), s.end(), 'a'), count(s.begin(), s.end(), 'b')) << "\n";
  }
}
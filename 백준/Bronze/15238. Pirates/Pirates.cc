#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  string w;
  cin >> n >> w;

  vector<int> freq(26, 0);
  for (char c : w)
    freq[c - 'a']++;

  int maxFreq = *max_element(freq.begin(), freq.end());
  char mostFreqLetter = 'a' + distance(freq.begin(), find(freq.begin(), freq.end(), maxFreq));

  cout << mostFreqLetter << " " << maxFreq << endl;
}
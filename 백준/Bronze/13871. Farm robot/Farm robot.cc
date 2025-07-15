#include <bits/stdc++.h>

using namespace std;

int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  int n, c, s; cin >> n >> c >> s;
  int currentPosition = 1, count = (s == 1) ? 1 : 0;

  for (int i = 0; i < c; i++) 
  {
    int command; cin >> command;
    currentPosition += command;

    if (currentPosition > n) currentPosition = 1;
    else if (currentPosition < 1) currentPosition = n;

    if (currentPosition == s) count++;
  }
  cout << count << "\n";
  return 0;
}
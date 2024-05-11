#include <bits/stdc++.h>
using namespace std;
int t, b1, b2, lx, ly, hx, hy;
string tmp = "No";
int main(){
  cin >> t >> b1 >> b2;
  while(t--){
    cin >> lx >> ly >> hx >> hy;
    if(lx <= b1 && b1 <= hx && ly <= b2 && b2 <= hy) tmp = "Yes";
  }
  cout << tmp;
}
#include <bits/stdc++.h>
using namespace std;
double c4, a3, a4, e, p, s;
int main(){
  cin >> c4 >> a3 >> a4;
  e = 229 * 324 * c4 * 2;
  p = 297 * 420 * a3 * 2;
  s = 210 * 297 * a4;
  
  printf("%.6f", (e + p + s) * 0.000001);
}
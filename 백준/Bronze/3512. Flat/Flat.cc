#include <bits/stdc++.h>
using namespace std;

map <string, double> sp;
double n, c, totalSize, sz;
string type;

int main(){
  cin >> n >> c;

  while(n--){
    cin >> sz >> type;
    sp[type] += sz;
    totalSize += sz;
  }
  cout << totalSize << '\n' << sp["bedroom"] << '\n';
  printf("%.6f\n", c * (totalSize - sp["balcony"]/2));
}
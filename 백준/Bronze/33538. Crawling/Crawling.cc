#include <iostream>  
#include <string>  

using namespace std;
int main() {
  int l, n;
  double t;
  cin >> l >> n >> t;
  
  string res = "DOOMED";
  for(int i = 0; i < n; ++i){
    double f, b;
    std::cin >> f >> b;
    
    double t2 = l / f + l / b;  
    
    if(t > t2){
      res = "HOPE";
      break;
    }
  } 
  std::cout << res;
}
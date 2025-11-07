#include <iostream>  
#include <algorithm> 

int main() {
  int legs;
  std::cin >> legs;
  
  for(int i = 0; i < legs; ++i){
    int route;
    std::cin >> route;
    
    int res = 0;
    long double min_time = 2100000000;
    for(int j = 1; j <= route; ++j){
      long double speed, distance;
      std::cin >> speed >> distance;
      if(min_time > distance / speed){
        min_time = distance / speed;
        res = j;  
      }
    }
    std::cout << res << '\n';
  }
}
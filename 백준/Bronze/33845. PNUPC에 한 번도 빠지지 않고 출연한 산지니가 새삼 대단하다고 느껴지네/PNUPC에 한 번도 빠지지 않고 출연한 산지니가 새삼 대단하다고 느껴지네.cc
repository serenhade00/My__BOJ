#include <iostream> 

 using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
  
    string S, T;
    cin >> S >> T;
  
    bool alphabets[26] = {};
    for(int idx = 0; idx < S.length(); ++idx){  
      alphabets[S[idx] - 'a'] = true;  
    }
  
    for(int idx = 0; idx < T.length(); ++idx){ 
      if(!alphabets[T[idx] - 'a']){  
        cout << T[idx];  
      }
    }
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll vk, jk, va, ja, vh, dh, jh, lCK, lCA, hC;
int main(){
  cin >> vk >> jk >> va >> ja >> vh >> dh >> jh;
  lCK = vk * jk;
  lCA = va * ja;
  hC = vh * dh * jh;
  cout << hC*(lCA + lCK);
}
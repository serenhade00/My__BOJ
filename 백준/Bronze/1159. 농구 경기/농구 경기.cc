#include <bits/stdc++.h>
using namespace std;

string alp = "abcdefghijklmnopqrstuvwxyz";
int cnt[26];
string print;
int n;
int main(){ 
  cin >> n;
  int chk = 0;
  for (int i = 0; i < n; i++) {
    string name;
    cin >> name;
    for (int j = 0; j < 26; j++) {
      if(alp[j] == name[0])
        cnt[j]+=1;
    }
  }
  for (int i = 0; i < 26; i++) {
    if (cnt[i]>=5) print += alp[i];
    else chk ++;
  }

  if (chk == 26) cout << "PREDAJA";
  else cout << print;
}
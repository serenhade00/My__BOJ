#include <bits/stdc++.h>
using namespace std;
int main(void){
    string s; getline(cin, s);
    int len = s.size();
    if(s.substr(len-3) == "eh?") cout << "Canadian!";
    else cout << "Imposter!";
}
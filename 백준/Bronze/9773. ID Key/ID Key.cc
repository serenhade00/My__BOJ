#include <bits/stdc++.h>
using namespace std;
int main(void){
	int t; cin >> t;
	for(int i=0; i<t; i++){
		string s; cin >> s;
	    int k = 0;
	    for(int j=0; j<13; j++) k += s[j] - '0';
	    k += stoi(s.substr(10, 3)) * 10;
	    if(k > 9999) cout << to_string(k).substr(1);
	    else if(k < 1000) cout << k + 1000;
	    else cout << k;
	    cout << '\n';
	}
}
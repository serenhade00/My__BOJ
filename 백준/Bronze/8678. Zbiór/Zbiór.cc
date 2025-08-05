#include <bits/stdc++.h>

using namespace std;
int z, a, b, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> z;
    while(z--){
        cin >> a >> b;
        if(b % a) cout << "NIE\n";
        else cout << "TAK\n";
    }
}
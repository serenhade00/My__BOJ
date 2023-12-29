#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
int w;
int main(){
    cin >> n >> w;
    if(n > 5) {
        cout << "Love is open door";
    }
    else {
        for(int i = 1; i < n; i++){
            w = 1 - w;
            cout << w << '\n';
        }
    }
}
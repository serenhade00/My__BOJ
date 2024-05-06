#include <bits/stdc++.h>

using namespace std;
int n, sum;
int main(){
    cin >> n;
    for(int i = 0, x; i < n; i++) {
        int mx = 0;
        for(int j = 0; j < n; j++){
            cin >> x;
            mx = max(mx, x);
        }
        if(mx > 0) sum += mx;
    }
    cout << sum;
}
#include <bits/stdc++.h>
using namespace std;
int a[5], x, y, r, ans;
int main(){
    cin >> a[1] >> a[2] >> a[3] >> a[4] >> x >> y >> r;
    for(int i = 1; i <= 4; i++){
        if(x == a[i]) ans = i;
    }
    cout << ans;
}
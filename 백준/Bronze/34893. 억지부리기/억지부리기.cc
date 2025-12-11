#include <bits/stdc++.h>
using namespace std;
int main(void){
    long long a, b, c, na, nc;
    cin >> a >> b >> c;
    na = a, nc = c;
    if(a >= c + 3){
        na -= (a-c) / 3 * 2;
        nc += (a-c) / 3;
    }
    cout << min({na, b, nc});
}
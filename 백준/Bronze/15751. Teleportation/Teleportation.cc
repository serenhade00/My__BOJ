#include <bits/stdc++.h>
using namespace std;
int ab[2], xy[2], d1, d2;
int main(){
    cin >> ab[0] >> ab[1] >> xy[0] >> xy[1];
    sort(ab, ab + 2);
    sort(xy, xy + 2);
    d1 = ab[1] - ab[0];
    d2 = abs(ab[0] - xy[0]) + abs(ab[1] - xy[1]);
    cout << min(d1, d2);
}
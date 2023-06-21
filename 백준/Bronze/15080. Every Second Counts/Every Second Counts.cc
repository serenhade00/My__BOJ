#include <bits/stdc++.h>
using namespace std;
int a[3], b[3], sT, eT;
int main(){
    scanf("%d : %d : %d", &a[0], &a[1], &a[2]);
    scanf("%d : %d : %d", &b[0], &b[1], &b[2]);
    sT = a[2] + a[1] * 60 + a[0] * 3600;
    eT = b[2] + b[1] * 60 + b[0] * 3600;
    if(sT > eT) cout << 24 * 3600 - sT + eT;
    else cout << eT - sT;
}
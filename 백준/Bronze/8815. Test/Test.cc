#include <bits/stdc++.h>
using namespace std;
int t, n;
char answers[4] = {'A', 'B', 'C', 'D'};

int main(){
    cin >> t;
    while(t--){
        cin >> n;
        int m = (n-1) / 3;
        int mL = (n-1) % 3;
        cout << answers[(m + mL) % 4] << '\n';
    }
}
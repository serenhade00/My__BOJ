#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
    while(1){
        int j = 0, m = 0;
        cin >> n;
        if(!n) break;
        for(int i = 0, x; i < n; i++){
            cin >> x;
            if(!x) m++;
            else j++;
        }
        printf("Mary won %d times and John won %d times\n", m, j);
    }
}
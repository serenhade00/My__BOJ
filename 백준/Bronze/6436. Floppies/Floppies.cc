#include <bits/stdc++.h>
#define FILE_SIZE 1860000
using namespace std;
int k, cnt;
int main(){
    while(1){
        cnt++;
        cin >> k;
        if(!k) break;
        if(k % 2) k = k/2 + 1;
        else k/=2;
        k += k/2;
        printf("File #%d\n", cnt);
        printf("John needs %d floppies.\n", (k + FILE_SIZE - 1) / FILE_SIZE);
        cout << '\n';
    }
}
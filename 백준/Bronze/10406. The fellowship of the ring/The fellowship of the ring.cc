#include<iostream>
using namespace std;
int main(){
    int w, n, p, cnt = 0;
    int h[200];
    cin >> w >> n >> p;
    for(int i=0;i<p;i++){
        cin >> h[i];
        if(h[i]>=w && h[i]<=n)
            cnt++;
    }
    cout << cnt << '\n';
}
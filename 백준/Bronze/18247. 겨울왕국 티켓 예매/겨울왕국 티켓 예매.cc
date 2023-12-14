#include <iostream>
using namespace std;
int main(){
    int t,n,m; cin>>t;
    while(t--){
        cin>>n>>m;
        cout<<((n<12||m<4)?-1:m*11+4)<<endl;
    }
}
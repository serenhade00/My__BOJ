#include <bits/stdc++.h>
using namespace std;
int age;
vector <int> v;
int main(){
    while(1){
        cin >> age;
        if(!age) break;
        v.resize(age * 2);
        int leaves = 1;
        for(int i = 0; i < 2 * age; i++) cin >> v[i];
        for(int i = 0; i < age; i++) {
            int sf = v[i*2];
            int cut = v[i*2+1];
            leaves = leaves * sf - cut;
        }
        cout << leaves << '\n';
    }
}
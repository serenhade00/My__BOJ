#include <iostream>
using namespace std;

int main(){
    int N;
    int p = 0;
    cin >> N;

    for(int i=0; i < N+1; i++){
        for(int j=0; j < i+1; j++){
            p += i + j;
        }
    }
    cout << p;
}
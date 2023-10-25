#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int nn[1000];
    long long int mm[1000];
    long long int a, b;
    cin >> a >> b;
    for(int i=0;i<a;i++){
        cin >> nn[i];
    }
    for(int i=0;i<b;i++){
        cin >> mm[i];
    }
    sort(nn, nn+a);
    sort(mm, mm+b);
    cout << nn[a-1] + mm[b-1];
}
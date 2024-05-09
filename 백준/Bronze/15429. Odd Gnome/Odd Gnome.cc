#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--){
        ll n, arr[1005];
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> arr[i];
        for (int i=1;i<n-1;i++){
            if (arr[i-1]<=arr[i+1] && (arr[i-1]>=arr[i] || arr[i]>=arr[i+1])){
                cout << i+1 << "\n";
            }
        }
    }
}
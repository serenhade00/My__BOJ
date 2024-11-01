#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> num(n);
    for(int i=0; i<n; i++)
        num[i] = i+1;
    do{
        for(int i=0; i<n; i++)
            cout << num[i] << ' ';
        cout << '\n';
    }while(next_permutation(num.begin(), num.end()));
}
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll T, N;
    
    cin >> T;
    while (T--)
    {
        cin >> N;
        ll temp = sqrt(N);
        if (temp * temp == N) cout << "1\n";
        else cout << "0\n";
    }
}
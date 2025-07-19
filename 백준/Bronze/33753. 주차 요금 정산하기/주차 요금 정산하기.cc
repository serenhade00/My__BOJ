#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll A, B, C, T;

    cin >> A >> B >> C >> T;
    if (T <= 30) cout << A;
    else cout << A + (T - 30 + B - 1) / B * C;
}
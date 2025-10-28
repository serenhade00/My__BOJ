#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll x, sum = 0;
    while (cin >> x) sum += x;
    cout << sum / 2;
}
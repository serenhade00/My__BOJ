#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    ll a, b;
    cin >> a >> b;
    cout << (b + 1) / 2 - (a + 1) / 2 + 1;
}
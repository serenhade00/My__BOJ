#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    ll a, b, c;
    cin >> a >> b >> c;
    if (max({ a,b,c }) * 2 == a + b + c) cout << 1;
    else cout << 0;
}
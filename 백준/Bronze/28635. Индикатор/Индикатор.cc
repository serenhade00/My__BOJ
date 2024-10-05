#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll m, a, b;

    cin >> m >> a >> b;
    if (a <= b) cout << b - a;
    else cout << b - a + m;
}
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c, d, mn;
    cin >> a >> b >> c >> d;
    mn = min({ a,b,c,d });

    cout << a + b + c + d - mn + 1;
}
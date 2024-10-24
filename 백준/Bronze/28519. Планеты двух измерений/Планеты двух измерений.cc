#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (abs(a - b) <= 1) cout << a + b;
    else cout << 2 * min(a, b) + 1;
}
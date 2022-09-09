#include <iostream>

using namespace std;

int main(void)
{
    int x, l, r;
    cin >> x >> l >> r;
    if(x >= l && x <= r)
        cout << x;
    else if(x < l)
        cout << l;
    else
        cout << r;
}
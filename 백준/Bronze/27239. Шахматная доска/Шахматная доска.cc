#include <iostream>
using namespace std;

int main(void)
{
    int x;
    cin >> x;
    x--;

    cout << (char)('a' + x % 8) << x / 8 + 1;
}
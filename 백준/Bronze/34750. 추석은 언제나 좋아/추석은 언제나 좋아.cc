#include <iostream>

using namespace std;

int main(void)
{
    int n, a, b;
    cin >> n;
    if(n >= 1000000)
        a = n * 2 / 10, b = n * 8 / 10;
    else if(n >= 500000)
        a = n * 15 / 100, b = n * 85 / 100;
    else if(n >= 100000)
        a = n / 10, b = n * 9 / 10;
    else
        a = n * 5 / 100, b = n * 95 / 100;
    cout << a << ' ' << b;
}
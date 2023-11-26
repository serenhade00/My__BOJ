#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    if(a < 10)
        a += 24;
    b += 24;
    cout << b-a;
}
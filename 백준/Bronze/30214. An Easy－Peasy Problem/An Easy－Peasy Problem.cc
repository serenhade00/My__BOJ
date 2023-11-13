#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    a >= (b+1)/2 ? cout << 'E' : cout << 'H';
}
#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a*b < a + b*c)
        cout << 1;
    else if(a*b > a + b*c)
        cout << 2;
    else
        cout << 0;
}
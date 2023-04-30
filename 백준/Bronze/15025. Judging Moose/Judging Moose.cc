#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    
    if(a == 0 && b == 0)
        cout << "Not a moose";
    else if(a == b)
        cout << "Even " << a*2;
    else
        cout << "Odd " << max(a, b) * 2;
}
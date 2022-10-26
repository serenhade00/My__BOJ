#include <iostream>

using namespace std;

int main(void)
{
    int a;
    cin >> a;
    
    if(a == 0 || a == 1)
        cout << 1;
    else if(a == 2)
        cout << 2;
    else if(a == 3)
        cout << 6;
    else if(a == 4)
        cout << 4;
    else
        cout << 0;
}
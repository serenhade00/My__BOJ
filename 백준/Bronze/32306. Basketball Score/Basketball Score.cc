#include <iostream>

using namespace std;

int main(void)
{
    int a = 0, b = 0, val;
    
    cin >> val; a += val;
    cin >> val; a += 2*val;
    cin >> val; a += 3*val;

    cin >> val; b += val;
    cin >> val; b += 2*val;
    cin >> val; b += 3*val;
    if(a == b)
    {
        cout << 0;
        return 0;
    }
    (a > b) ? cout << 1: cout << 2;
}
#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(c <= a-2 && d <= b-2)
        cout << 1;
    else
        cout << 0;
        
}
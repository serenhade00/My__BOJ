#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    
    if(a + b <= c)
        cout << 1;
    else
        cout << 0;
}
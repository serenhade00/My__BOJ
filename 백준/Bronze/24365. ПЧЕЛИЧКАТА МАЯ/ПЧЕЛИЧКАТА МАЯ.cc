#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    
    int div = (a+b+c)/3;

    cout << (b-div)+(c-div)*2;    
}
#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    
    if(a == 1 || b == 1)
    	cout << a+b-1;
    else
        cout << (a + b) * 2 - 4;
}
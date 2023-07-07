#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    if(n <= 2)
        cout << 1;
    else if(n <= 5)
        cout << 2;
    else
        cout << 3;
}
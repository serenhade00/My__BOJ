#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    if(n % 11 == 0)
        cout << 1;
    else
        cout << 0;
}
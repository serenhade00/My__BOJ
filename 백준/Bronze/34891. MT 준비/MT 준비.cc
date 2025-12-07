#include <iostream>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;
    if(n == 0)
        cout << 0;
    else if(n == 1)
        cout << 1;
    else
        cout << ((n-1) / m) + 1;
}
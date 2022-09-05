#include <iostream>

using namespace std;

int main(void)
{
    int b;
    cin >> b;
    int pres = 5*b-400;
    cout << pres << '\n';
    if(pres < 100)
        cout << 1;
    else if(pres == 100)
        cout << 0;
    else
        cout << -1;
}
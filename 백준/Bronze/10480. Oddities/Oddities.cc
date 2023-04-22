#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        if(n % 2 == 0)
            cout << n << " is even\n";
        else
            cout << n << " is odd\n";
    }
}
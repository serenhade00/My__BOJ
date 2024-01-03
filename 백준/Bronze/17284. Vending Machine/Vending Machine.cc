#include<iostream>
using namespace std;
int main() 
{
    int n = 5000, a;
    while (cin >> a) 
    {
        if (a == 1)
            n -= 500;
        else if (a == 2)
            n -= 800;
        else if (a == 3)
            n -= 1000;
    }
    cout << n << '\n';
}
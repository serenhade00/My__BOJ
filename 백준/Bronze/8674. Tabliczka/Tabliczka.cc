#include<iostream>

using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;
    if (a % 2 == 0 || b % 2 == 0) 
        cout << 0 << '\n';
    else 
    {
        long long int x = (a < b) ? a : b;
        cout << x << '\n';
    }
}
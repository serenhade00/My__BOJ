#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    double d, h;
    cin >> d >> h;
    double r = (d + 10) / 2;

    cout << fixed; cout.precision(6);
    cout << 3.14159265358979 * r * (2 * h + r);
}
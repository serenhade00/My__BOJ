#include <iostream>
using namespace std;

int main(void)
{
    int y, m, d, plus;
    char c;
    cin >> y >> c >> m >> c >> d >> plus;
    d += plus;
    m += (d - 1) / 30;
    d = (d - 1) % 30 + 1;
    y += (m - 1) / 12;
    m = (m - 1) % 12 + 1;
    cout << y << '-' << m / 10 << m % 10 << '-' << d / 10 << d % 10;
}
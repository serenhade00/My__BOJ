#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    char x;
    cin >> a >> x >> b >> x >> c;
    if (b < 9 || (b == 9 && c <= 16)) cout << "GOOD";
    else cout << "TOO LATE";
}
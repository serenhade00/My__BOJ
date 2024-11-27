#include <iostream>

using namespace std;

int main(void)
{
    int T, x;
    cin >> T;
    while (T--)
    {
        cin >> x;
        if ((x + 1) % (x % 100) == 0) cout << "Good\n";
        else cout << "Bye\n";
    }
}
#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x, y;
    while(1)
    {
        cin >> x >> y;
        if (x == 0 && y == 0) break;
        if (x + y == 13) cout << "Never speak again.\n";
        else if (x < y) cout << "Left beehind.\n";
        else if (x > y) cout << "To the convention.\n";
        else cout << "Undecided.\n";
    }
}
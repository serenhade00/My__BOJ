#include <iostream>
using namespace std;
int X, Y;

int solve(int value)
{
    int repunit = 0;
    while (value--)
    {
        repunit = repunit * 10 + 1;
    }
    return repunit;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> X >> Y;
    cout << solve(X) + solve(Y);
}
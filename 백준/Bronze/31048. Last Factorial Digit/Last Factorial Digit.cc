#include <iostream>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        if (N == 1 || N == 2 || N == 4) cout << N;
        else if (N == 3) cout << 6;
        else cout << 0;
        cout << "\n";
    }
}
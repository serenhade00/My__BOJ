#include <iostream>
using namespace std;

bool is_prime(int x)
{
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;

    cout << N << "\n";
    for (int i = 1; i <= N - 1; i++)
        cout << i << ' ';
    for (int i = 1000;; i--)
    {
        if (is_prime(i))
        {
            cout << i;
            break;
        }
    }
}
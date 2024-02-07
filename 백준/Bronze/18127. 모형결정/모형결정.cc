#include <iostream>
using namespace std;

int main(void)
{
    long long A, B, i, ans = 1;
    cin >> A >> B;
    for (i = 1; i <= B; i++)
    {
        ans += (A - 2) * i + 1;
    }
    cout << ans;
}
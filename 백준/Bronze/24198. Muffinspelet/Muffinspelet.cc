#include <iostream>
using namespace std;

int main(void)
{
    int ans[2] = { 0 }, t = 0, n;
    cin >> n;
    while (n)
    {
        t++;
        t %= 2;
        ans[t] += (n + 1) / 2;
        n /= 2;
    }
    cout << ans[0] << ' ' << ans[1];
}
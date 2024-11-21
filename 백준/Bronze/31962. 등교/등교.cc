#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, X, i, a, b, mx = -1;
    cin >> N >> X;
    for (i = 0; i < N; i++)
    {
        cin >> a >> b;
        if (a + b <= X) mx = max(mx, a);
    }
    cout << mx;
}
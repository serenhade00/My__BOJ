#include <iostream>

using namespace std;

int main()
{
    int N, x, i, y, cnt = 0;

    cin >> N >> x;
    for (i = 1; i <= N; i++)
    {
        cin >> y;
        if (y <= x) cnt++;
    }
    cout << cnt;
}
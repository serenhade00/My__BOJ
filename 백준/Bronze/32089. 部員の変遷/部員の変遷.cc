#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, i, first, second, third, mx = 0;

    while (true)
    {
        cin >> N;
        if (!N) break;
        cin >> first >> second;

        mx = 0;
        for (i = 3; i <= N; i++)
        {
            cin >> third;
            mx = max(mx, first + second + third);
            first = second; second = third;
        }
        cout << mx << "\n";
    }
}
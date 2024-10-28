#include <iostream>

using namespace std;

int main()
{
    int N, i, x;
    bool able = true, s = false;

    cin >> N;
    for (i = 0; i < 3; i++)
    {
        s = false;
        for (int j = 0; j < N; j++)
        {
            cin >> x;
            if (x == 7) s = true;
        }
        if (!s) able = false;
    }
    if (able) cout << 777;
    else cout << 0;
}
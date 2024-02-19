#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int N, i, k, before, now, cnt = 0;
    cin >> N >> k;
    for (i = 1; i <= N; i++)
    {
        cin >> now;
        if (i >= 2)
        {
            if (before - k >= now)
                cnt++;
        }
        before = now;
    }
    cout << cnt;
}
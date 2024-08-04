#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int n, m, i, j, goal, cnt = 0;
    bool a;

    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        a = true;
        for (j = 1; j <= m; j++)
        {
            cin >> goal;
            if (goal == 0)
                a = false;
        }
        if (a) cnt++;
    }
    cout << cnt;
}
#include <iostream>
#include <algorithm>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, x, y, p, i, j, num, mR[1010] = { 0 }, mC[1010] = { 0 };
    cin >> N >> x >> y;
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= N; j++)
        {
            cin >> num;
            mR[i] = max(mR[i], num);
            mC[j] = max(mC[j], num);
            if (i == x && j == y) p = num;
        }
    }
    if (mR[x] <= p && mC[y] <= p) cout << "HAPPY";
    else cout << "ANGRY";
}
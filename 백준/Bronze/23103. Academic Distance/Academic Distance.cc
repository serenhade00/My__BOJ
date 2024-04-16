#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t, x, y, x2, y2, sum = 0;
    cin >> t >> x >> y;
    for(int i=0; i<t-1; i++)
    {
        cin >> x2 >> y2;
        sum += (abs(x2-x) + abs(y2-y));
        x = x2, y = y2;
    }
    cout << sum;
}
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll N, tc = 0;
    double x, y, m, xsum = 0, ysum = 0, msum = 0;
    while (true)
    {
        cin >> N;
        if (N < 0) break;
        xsum = ysum = msum = 0;
        for (ll i = 0; i < N; i++)
        {
            cin >> x >> y >> m;
            xsum += x * m;
            ysum += y * m;
            msum += m;
        }
        cout.precision(2); cout << fixed;
        cout << "Case " << ++tc << ": " << xsum / msum << ' ' << ysum / msum << "\n";
    }
}
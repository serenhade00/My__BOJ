#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    ll T;
    cin >> T;
    while (T--)
    {
        ll N, i, a, b, sum = 0, mn = 0;

        cin >> N;
        for (i = 0; i < N;i++)
        {
            cin >> a >> b;
            sum += a - b;
            mn = min(mn, sum);
        }
        cout << -mn << "\n";
    }
}
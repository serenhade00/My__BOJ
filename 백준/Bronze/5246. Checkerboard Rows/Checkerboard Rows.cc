#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll T, N, i, x, y;

    cin >> T;
    while (T--)
    {
        cin >> N;
        ll cnt[9] = { 0 }, Ans = 0;
        for (i = 1; i <= N; i++)
        {
            cin >> x >> y;
            cnt[y]++;
            Ans = max(Ans, cnt[y]);
        }
        cout << Ans << "\n";
    }
}
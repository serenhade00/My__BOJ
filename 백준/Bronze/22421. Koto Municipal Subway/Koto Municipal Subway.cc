#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0);
    double N, M, i, mn;

    while (1)
    {
        cin >> N >> M;
        if (N == 0 && M == 0) break;
        mn = 2e9;
        for (i = 0; i <= N; i += 1)
        {
            double dis = sqrt(i * i + (N - i) * (N - i));
            mn = min(mn, abs(M - dis));
        }
        cout.precision(6); cout << fixed;
        cout << mn << "\n";
    }
}
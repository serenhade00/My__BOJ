#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll N, i, trained[1010] = { 0 }, Ans = 0, a, b;
    cin >> N;
    for (i = 1; i <= N; i++) cin >> trained[i];
    for (i = 1; i <= N; i++)
    {
        cin >> a >> b;
        if (trained[i])
            Ans += max((ll)(0), b - a);
    }
    cout << Ans;
}
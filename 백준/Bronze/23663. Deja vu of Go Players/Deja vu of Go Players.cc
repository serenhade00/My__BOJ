#include <iostream>
#define ll long long
using namespace std;


int main(void)
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll T, N, M, i, x;
    cin >> T;
    while (T--)
    {
        cin >> N >> M;

        if (N <= M) cout << "Yes\n";
        else cout << "No\n";
        for (i = 1; i <= N + M; i++) cin >> x;
    }
}
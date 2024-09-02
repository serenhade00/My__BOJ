#include <iostream>
#define ll long long
using namespace std;


int main(void)
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll N, i, j, A[333][333] = { 0 }, B[333][333] = { 0 };

    cin >> N;
    for (i = 1; i <= N; i++)
        for (j = 1; j <= N; j++)
            cin >> A[i][j];
    for (i = 1; i <= N; i++)
        for (j = 1; j <= N; j++)
            cin >> B[i][j];

    ll cnt = 0;
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= N; j++)
        {
            for (ll k = 1; k <= N; k++)
                if (A[i][k] && B[k][j])
                {
                    cnt++;
                    break;
                }
            
        }
    }

    cout << cnt << "\n";
}
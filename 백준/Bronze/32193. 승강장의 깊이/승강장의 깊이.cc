#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    ll N, i, a, b, ans = 0;
    cin >> N;
    for (i = 1; i <= N; i++)
    {
        cin >> a >> b;
        ans += a - b;
        cout << ans << "\n";
    }
}
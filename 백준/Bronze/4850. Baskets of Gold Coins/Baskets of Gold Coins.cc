#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll N, w, d, sum;
    while (cin >> N >> w >> d >> sum)
    {
        ll idx = (N * (N - 1) / 2 * w - sum) / d;
        if (idx == 0) cout << N;
        else cout << idx;
        cout << "\n";
    }
}
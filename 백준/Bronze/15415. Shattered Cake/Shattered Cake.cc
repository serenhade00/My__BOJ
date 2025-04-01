#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll L, N, w, h, i, sum = 0;

    cin >> L >> N;
    for (i = 1; i <= N; i++)
    {
        cin >> w >> h;
        sum += w * h;
    }
    cout << sum / L;
}
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll w, h, n, a, b;
    cin >> w >> h >> n >> a >> b;
    ll paper = (w / a) * (h / b);
    if (paper == 0) cout << -1;
    else cout << (n + paper - 1) / paper;
}
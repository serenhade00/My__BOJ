#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, n, k, ju, so;
    cin >> a >> b >> n >> k;

    cout << ((k-1) / (b*n)) + 1 << ' ' << (((k-1) % (b * n)) / n) + 1;
}
#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int H, M, S;
    cin >> H >> M >> S;
    S++;
    if (S >= 60)
    {
        M++;
        S -= 60;
    }
    if (M >= 60)
    {
        H++;
        M -= 60;
    }
    if (H >= 24)
    {
        H -= 24;
    }
    cout << H / 10 << H % 10 << ':' << M / 10 << M % 10 << ':' << S / 10 << S % 10;
}
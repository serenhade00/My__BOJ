#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, b, d;
    double a, c;
    cin >> n >> a >> b >> c >> d;
    
    cout << min((int)ceil(n / a) * b, (int)ceil(n / c) * d);
}
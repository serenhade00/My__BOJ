#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, f, num;
    cin >> n >> f;
    for(int i=1; i<n; i++)
    {
        cin >> num;
        int gcd = __gcd(f, num);
        cout << f / gcd << "/" << num / gcd << '\n';
    }
}
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll last = 1, a, b, N;
    char c;

    cin >> N;
    for (ll i = 0; i < N; i++)
    {
        cin >> a >> c >> b;
        if (c == '+') last = a + b - last;
        if (c == '-') last = (a - b) * last;
        if (c == '*') last = a * a * b * b;
        if (c == '/') last = (a + 1) / 2;
        cout << last << "\n";
    }
}
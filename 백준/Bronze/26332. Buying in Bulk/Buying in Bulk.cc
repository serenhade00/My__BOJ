#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << a << ' ' << b << '\n' << b + (a-1)*(b-2) << '\n';
    }
}
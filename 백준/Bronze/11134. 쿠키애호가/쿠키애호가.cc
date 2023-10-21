#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int a, b;
        cin >> a >> b;
        if(a % b == 0)
            cout << a / b << '\n';
        else
            cout << a / b + 1 << '\n';
    }
}
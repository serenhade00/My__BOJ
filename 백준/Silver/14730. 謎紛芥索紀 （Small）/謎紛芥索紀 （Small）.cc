#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, sum = 0;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int a, b;
        cin >> a >> b;
        sum += a*b;
    }
    cout << sum;
}
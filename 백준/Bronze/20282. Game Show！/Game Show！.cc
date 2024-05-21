#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t, sum = 100, mx = 100;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        sum += n;
        mx = max(mx, sum);
    }
    cout << mx;
}
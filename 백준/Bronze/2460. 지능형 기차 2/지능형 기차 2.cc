#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int sum = 0, mx = 0;
    for(int i=0; i<10; i++)
    {
        int a, b;
        cin >> a >> b;
        sum += b-a;
        mx = max(mx, sum);
    }
    cout << mx;
}
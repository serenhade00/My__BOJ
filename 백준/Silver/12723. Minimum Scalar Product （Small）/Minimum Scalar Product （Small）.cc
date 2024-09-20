#include <bits/stdc++.h>

using namespace std;

int a[10];
int b[10];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n, sum = 0;
        cin >> n;
        for(int j=0; j<n; j++)
            cin >> a[j];
        for(int j=0; j<n; j++)
            cin >> b[j];
        sort(a, a+n); sort(b, b+n);
        for(int j=0; j<n; j++)
            sum += a[j] * b[n-j-1];
        cout << "Case #" << i+1 << ": " << sum << '\n';
    }
}
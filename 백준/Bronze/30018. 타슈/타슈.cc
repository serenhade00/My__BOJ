#include <bits/stdc++.h>

using namespace std;

int a[101];
int b[101];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, sum = 0;
    cin >> t;
    for(int i=0; i<t; i++)
        cin >> a[i];
    for(int i=0; i<t; i++)
        cin >> b[i];
    for(int i=0; i<t; i++)
    {
        if(b[i] > a[i])
            sum += b[i] - a[i];
    }
    cout << sum;
}
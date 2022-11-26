#include <bits/stdc++.h>

using namespace std;

int a[10];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<10; j++)
            cin >> a[j];
        sort(a, a+10);
        cout << a[7] << '\n';
    }
}
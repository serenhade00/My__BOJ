#include <bits/stdc++.h>

using namespace std;

int num[11];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i=0; i<11; i++)
        cin >> num[i];
    
    int n, sum = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int a, c;
        double b;
        cin >> a >> b >> c;
        b >= 2  && c >= 17 ? sum += num[a] : sum = sum;
    }
    cout << sum;
}
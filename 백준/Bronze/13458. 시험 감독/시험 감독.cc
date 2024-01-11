#include <bits/stdc++.h>

using namespace std;

int num[1000001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long n, b, c, sum;
    cin >> n;
    sum = n;
    for(int i=0; i<n; i++)
        cin >> num[i];
    cin >> b >> c;
    sum = n;
    for(int i=0; i<n; i++)
    {
        num[i] -= b;
        if(num[i] % c == 0 && num[i] > 0)
            sum += num[i] / c;
        else if(num[i] % c && num[i] > 0)
            sum += num[i] / c + 1;
    }
    cout << sum;
}
#include <bits/stdc++.h>

using namespace std;

int num[200001];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, a = 0, b = 0;
    cin >> t;
    for(int i=0; i<t; i++)
        cin >> num[i];
    sort(num, num+t);
    for(int i=0; i<t/2; i++)
    {
        a += num[i];
        b += num[t-i-1];
    }
    if(t % 2)
        b += num[t/2];
    cout << a << ' ' << b;
}
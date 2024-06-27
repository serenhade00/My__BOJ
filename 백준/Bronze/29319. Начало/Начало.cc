#include <bits/stdc++.h>

using namespace std;

int num[10001];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, sum = 0;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> num[i];
        sum += num[i];
    }
    sort(num, num+t);
    cout << sum - num[t-1];
}
#include <bits/stdc++.h>

using namespace std;

int num[1001];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    long long sum = 0;
    cin >> t;
    for(int i=0; i<t; i++)
        cin >> num[i];
    sort(num, num+t);
    for(int i=1; i<t; i++)
        sum += num[i] - num[i-1];
    sum += num[t-1] - num[0];
    cout << sum;
}
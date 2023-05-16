#include <bits/stdc++.h>

using namespace std;

int num[10];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, mx = 0;
    cin >> n;
    
    for(int i=0; i<n; i++)
        cin >> num[i];
    
    sort(num, num+n);
    do
    {
        int sum = 0;
        for(int i=1; i<n; i++)
            sum += abs(num[i] - num[i-1]);
        mx = max(mx, sum);
    }while(next_permutation(num, num+n));
    cout << mx;
}
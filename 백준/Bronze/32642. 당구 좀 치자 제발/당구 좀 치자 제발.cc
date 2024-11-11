#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, val;
    long long sum = 0, tmp = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> val;
        if(val)
            tmp++;
        else
            tmp--;
        sum += tmp;
    }
    cout << sum;
}
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, m, ans = 0;
    cin >> n >> m;
    long long sum = 0, val;
    for(int i=0; i<n; i++)
    {
        cin >> val;
        if(val >= 0)
            sum += val;
        else
        {
            if(sum + val < 0)
                sum = 0;
            else
            	sum += val;
        }
        if(sum >= m)
            ans++;
    }
    cout << ans;
}
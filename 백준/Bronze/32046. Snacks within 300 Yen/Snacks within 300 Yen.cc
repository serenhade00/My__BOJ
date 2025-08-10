#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    while(1)
    {
        int val, sum = 0;
        cin >> n;
        if(n == 0)
            break;
        for(int i=0; i<n; i++)
        {
            cin >> val;
            if(sum + val > 300)
                continue;
            sum += val;
        }
        cout << sum << '\n';
    }
}
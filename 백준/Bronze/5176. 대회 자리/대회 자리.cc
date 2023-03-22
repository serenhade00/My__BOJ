#include <bits/stdc++.h>

using namespace std;

int seat[505];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n, m, val, sum = 0;
        cin >> n >> m;
        for(int j=0; j<n; j++)
        {
            cin >> val;
            seat[val]++;
            if(seat[val] >= 2)
                sum++;
        }
        cout << sum << '\n';
        fill(seat+1, seat+m+1, 0);
    }   
}
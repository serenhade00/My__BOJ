#include <bits/stdc++.h>

using namespace std;

int park[21];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        for(int j=0; j<n; j++)
            cin >> park[j];
        
        sort(park, park+n);
        
        cout << 2*(park[n-1] - park[0]) << '\n';
    }
}
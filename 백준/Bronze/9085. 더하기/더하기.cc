#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    
    for(int i=0; i<t; i++)
    {
        int n, val;
        int sum = 0;
        cin >> n;
        
        for(int j=0; j<n; j++)
        {
            cin >> val;
            sum += val;
        }
        cout << sum << '\n';
    }
}


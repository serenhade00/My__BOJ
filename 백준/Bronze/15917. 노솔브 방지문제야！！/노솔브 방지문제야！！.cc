#include <bits/stdc++.h>

using namespace std;

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
        while(n > 1)
        {
            if(n % 2 == 0)
                n /= 2;
            else
                break;
        }
        if(n == 1)
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }
}
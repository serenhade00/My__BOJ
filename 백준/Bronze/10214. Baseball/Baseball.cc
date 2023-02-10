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
        int a, b, y = 0, k = 0;
        for(int j=0; j<9; j++)
        {
            cin >> a >> b;
            y += a, k += b;
        }
        if(y > k)
            cout << "Yonsei\n";
        else if(y == k)
            cout << "Draw\n";
        else
            cout << "Korea\n";
    }
}
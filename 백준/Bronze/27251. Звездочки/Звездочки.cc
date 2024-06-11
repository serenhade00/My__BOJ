#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int len = i*i;
        for(int j=1; j<=min(len, 100); j++)
            cout << '*';
        if(len > 100)
            cout << "...";
        cout << '\n';
    }
}
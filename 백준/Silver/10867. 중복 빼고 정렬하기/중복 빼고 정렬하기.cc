#include <bits/stdc++.h>

using namespace std;

int num[2001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, val;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        cin >> val;
        if(!num[val+1000])
            num[val+1000] = 1;
    }
    
    for(int i=0; i<=2000; i++)
    {
        if(num[i])
            cout << i-1000 << ' ';
    }
}
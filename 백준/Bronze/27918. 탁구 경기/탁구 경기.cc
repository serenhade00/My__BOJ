#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, d = 0, p = 0;
    char val;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> val;
        if(val == 'D')
            d++;
        else
            p++;
        
        if(abs(d-p) >= 2)
        	break;
    }
    cout << d << ':' << p;
}
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    if(t < 149)
    {
        cout << 99;
        return 0;
    }
    if(t >= 9949)
    {
    	cout << 9999;
    	return 0;
    }
    else
    {
        int mn = 0, mx;
        for(int i=99; i<=t; i+=100)
            mn = max(mn, i);
        for(int i=t; i<=10000; i++)
        {
            if(i % 100 == 99)
            {
                mx = i;
                break;
            }
        }
        if(t - mn < mx - t)
            cout << mn;
        else 
            cout << mx;
    }
}
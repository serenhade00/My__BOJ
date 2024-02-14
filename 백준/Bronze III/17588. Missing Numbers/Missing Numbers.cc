#include <bits/stdc++.h>

using namespace std;

int chk[201];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, mx = 0, val;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> val;
        chk[val] = 1;
        mx = max(mx, val);
    }
    bool op = 0;
    for(int i=1; i<=mx; i++)
    {
        if(!chk[i])
        {
        	cout << i << '\n';
        	op = 1;
        }
    }
    if(!op)
    	cout << "good job";
}
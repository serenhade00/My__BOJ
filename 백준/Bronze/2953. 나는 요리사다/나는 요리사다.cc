#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int mx = 0, idx;
    for(int i=0; i<5; i++)
    {
    	int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a+b+c+d > mx)
        {
            mx = a+b+c+d;
            idx = i+1;
        }
    }
    cout << idx << ' ' << mx;
}
#include <bits/stdc++.h>

using namespace std;

int q[5];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, x, y, a = 0;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> x >> y;
        if(x > 0 && y > 0)
            q[1]++;
        else if(x < 0 && y > 0)
            q[2]++;
        else if(x < 0 && y < 0)
            q[3]++;
        else if(x > 0 && y < 0)
            q[4]++;
        else
            a++;   
    }
    for(int i=1; i<=4; i++)
        cout << "Q" << i << ": " << q[i] << '\n';
    cout << "AXIS: " << a;
}
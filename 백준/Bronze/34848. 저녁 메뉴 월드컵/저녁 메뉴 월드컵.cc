#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, val;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int cnt = 0;
        cin >> val;
        while(val >= 2)
        {
            if(val % 2)
            {
                cnt++;
                val++;
            }
            val /= 2;
        }
        cout << cnt << '\n';
    }
}
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int ans = 0;
    char c;
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            cin >> c;
            if(i % 2 == 0 && j % 2 == 0 && c == 'F')
                ans++;
            if(i % 2 && j % 2 && c == 'F')
            	ans++;
        }
    }
    cout << ans;
}
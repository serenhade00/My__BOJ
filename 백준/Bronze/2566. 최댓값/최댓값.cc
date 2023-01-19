#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int mx = -1, r, c, num;
    for(int i=1; i<=9; i++)
    {
        for(int j=1; j<=9; j++)
        {
            cin >> num;
            if(num > mx)
            {
                mx = num, r = i, c = j;
            }
        }
    }
    cout << mx << '\n';
    cout << r << ' ' << c;
}
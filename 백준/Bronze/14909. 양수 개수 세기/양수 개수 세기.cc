#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, cnt = 0;
    while(cin >> n)
    {
        if(n > 0)
            cnt++;
    }
    cout << cnt;
}
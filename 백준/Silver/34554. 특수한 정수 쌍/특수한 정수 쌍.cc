#include <bits/stdc++.h>

using namespace std;

bool is_prime(int x)
{
    bool op = 0;
    int cnt = 0;
    for(int i=1; i<=x-1; i++)
    {
        if(x % i == 0)
            cnt++;
        if(cnt >= 2)
            break;
    }
    if(cnt >= 2)
        return false;
    return true;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        if(is_prime(n+1))
            cout << 1 << '\n' << 1 << ' ' << n+1 << '\n';
        else
            cout << 0 << '\n';
    }
}
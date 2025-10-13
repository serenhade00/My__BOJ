#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, st, gap = 1;
    cin >> n;
    st = n/2 +1;

    cout << st << ' ';
    for(int i=1; i<=n-1; i++)
    {
        if(i % 2)
            st -= gap;
        else
            st += gap;
        gap++;
        cout << st << ' ';
    }
}
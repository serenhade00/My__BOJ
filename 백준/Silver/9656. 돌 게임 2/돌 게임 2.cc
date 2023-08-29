#include <bits/stdc++.h>

using namespace std;

int d[1001]; // 돌이 n개 있을때 이기는 사람
int main(void)
{
    int n;
    cin >> n;
    
    d[1] = 1, d[3] = 1; // 1 = 상근 / 0 = 창영
    for(int i=2; i<=n; i++)
    {
        if(i-1 >= 1)
            d[i] = d[i-1] ^ 1;
        if(i >= 3)
            d[i] = d[i-3] ^ 1;
    }
    if(d[n] == 0)
        cout << "SK";
    else
        cout << "CY";
}
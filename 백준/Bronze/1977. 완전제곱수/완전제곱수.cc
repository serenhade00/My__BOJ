#include <bits/stdc++.h>

using namespace std;

bool num[10001];

int main(void)
{
    for(int i=1; i<=100; i++)
        num[i*i] = 1;
    int a, b, mn = 0, sum = 0;
    cin >> a >> b;
    for(int i=a; i<=b; i++)
    {
        if(num[i])
        {   
            if(!mn)
                mn = i;
            sum += i;
        }
    }
    if(!mn)
        cout << -1;
    else
        cout << sum << '\n' << mn;
}
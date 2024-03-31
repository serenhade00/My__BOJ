#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    int num = 0, st = 1;
    while(st <= t)
    {
        if(t & st)
            cout << num << ' ';
        num++, st *= 2;
    }
}
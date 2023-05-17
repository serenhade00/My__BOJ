#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int s, a, b;
    cin >> s >> a >> b;
    
    int st = 250;

    while(a < s)
    {
        st += 100;
        a += b;
    }
    cout << st;
}
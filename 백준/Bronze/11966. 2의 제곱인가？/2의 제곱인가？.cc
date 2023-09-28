#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    if(n == 1)
    {
        cout << 1;
        return 0;
    }
    bool op = 1;
    while(n > 1)
    {
        if(n % 2 == 1)
        {
            op = 0;
            break;
        }
        n /= 2;
    }
    cout << op;
}
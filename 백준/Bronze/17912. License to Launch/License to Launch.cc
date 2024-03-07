#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int n, i, x, mn = 2e9, p;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        if (x < mn)
        {
            mn = x;
            p = i;
        }
    }
    cout << p;
}
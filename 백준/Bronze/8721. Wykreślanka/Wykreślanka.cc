#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t, n = 0, x;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> x;
        if (x == n + 1)
            n++;
    }
    cout << t - n;
}
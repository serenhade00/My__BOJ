#include <iostream>

using namespace std;

int main(void)
{
    int n, a, b;
    int mn = 10001;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        if(b >= a && b < mn)
            mn = b;
    }
    if(mn == 10001)
        cout << -1;
    else
        cout << mn;
}
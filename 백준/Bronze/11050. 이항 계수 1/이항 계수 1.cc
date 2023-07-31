#include <iostream>

using namespace std;

int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    int ans = 1;
    int count = 0;
    cin >> a >> b;
    if(b==0)
    {
        cout << 1;
        return 0;
    }
    for(int i=a; count < b; i--, count++)
    {
        ans *= i;
    }
    ans /= factorial(b);
    cout << ans;
    
}
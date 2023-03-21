#include <iostream>

using namespace std;

int main(void)
{
    long long n;
    cin >> n;
    if(n==0 || n==1)
    {
        cout << 1;
        return 0;
    }
    for(int i=n-1; i>=1; i--)
        n *= i;
    cout << n;
}

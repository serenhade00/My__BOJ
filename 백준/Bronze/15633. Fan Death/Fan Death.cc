#include <iostream>

using namespace std;

int main(void)
{
    int t, sum = 0;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        if(t % i == 0)
            sum += i;
    }
    cout << sum*5-24;
}
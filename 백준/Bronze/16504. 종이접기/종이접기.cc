#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long n, len, val, sum = 0;
    cin >> n;
    len = n*n;
    for(int i=0; i<len; i++)
    {
        cin >> val;
        sum += val;
    }
    cout << sum;
}
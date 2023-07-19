#include <iostream>
using namespace std;

int main()
{
    int n, x, sum;
    cin >> n;
    sum = (n - 1) * 8;
    for (int i=0; i <n; i++)
    {
        cin >> x;
        sum += x;
    }
    cout << sum / 24 << ' ' << sum % 24;
}   
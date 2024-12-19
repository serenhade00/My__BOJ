#include <iostream>

using namespace std;

int main(void)
{
    int n, a, val, sum = 0;
    cin >> n >> a;
    for(int i=0; i<n; i++)
    {
        cin >> val;
        sum += val / a;
    }
    cout << sum;
}
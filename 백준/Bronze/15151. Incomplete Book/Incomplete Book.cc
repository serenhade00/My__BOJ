#include <iostream>
using namespace std;

int main(void)
{
    int k, d, sum = 0;
    cin >> k >> d;
    for (int i = 1;; i++)
    {
        sum += k;
        k *= 2;
        if (sum > d)
        {
            cout << i - 1;
            return 0;
        }
    }
}
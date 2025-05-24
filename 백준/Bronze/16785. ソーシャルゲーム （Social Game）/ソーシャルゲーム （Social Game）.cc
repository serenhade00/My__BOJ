#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int A, B, C, i, sum = 0;
    cin >> A >> B >> C;
    for (i = 1;; i++)
    {
        sum += A;
        if (i % 7 == 0) sum += B;
        if (sum >= C)
        {
            cout << i;
            break;
        }
    }
}
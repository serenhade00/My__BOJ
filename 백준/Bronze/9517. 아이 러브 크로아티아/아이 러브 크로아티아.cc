#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    int K, N, i, x, sum = 0;
    char c;
    cin >> K >> N;
    for (i = 0; i < N; i++)
    {
        cin >> x >> c;
        sum += x;
        if (sum > 210)
        {
            cout << K;
            return 0;
        }
        if (c == 'T')
        {
            K++;
            if (K == 9) K = 1;
        }
    }
}
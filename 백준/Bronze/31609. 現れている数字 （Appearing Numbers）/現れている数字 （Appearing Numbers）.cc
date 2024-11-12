#include <iostream>
using namespace std;

int main()
{
    int N, i, x;
    bool ck[10] = { 0 };

    cin >> N;
    for (i = 1; i <= N; i++)
    {
        cin >> x;
        ck[x] = true;
    }
    for (i = 0; i < 10; i++)
        if (ck[i])
            cout << i << "\n";
}
#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int a, b, mn = 2e9, N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        mn = min(mn, a + b);
    }
    cout << mn;
}
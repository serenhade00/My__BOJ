#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll N, sum, before;

    while (true)
    {
        cin >> N;
        if (N == 99999) break;
        sum = N / 10000 + (N / 1000) % 10;
        if (sum == 0) sum = before;
        if (sum % 2 == 0) cout << "right ";
        else cout << "left ";
        before = sum;
        cout << N % 1000 << "\n";
    }
}
#include <iostream>
#define ll long long
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0); 
    cin.tie(NULL);
    ll N, i, x, Ans = 0;
    cin >> N;
    for (i = 1; i <= N; i++)
    {
        cin >> x;
        Ans += (x + 1) / 2;
    }
    cout << Ans;
}
#include <iostream>
#define ll long long
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll N, a, b, c;
    cin >> N >> a >> b >> c;

    if (N >= a) cout << "Watermelon";
    else if (N >= b) cout << "Pomegranates";
    else if (N >= c) cout << "Nuts";
    else cout << "Nothing";
}
#include <iostream>
#define ll long long
using namespace std;

void Time(ll a, ll b)
{
    if (0 <= a && a <= 23 && 0 <= b && b <= 59) cout << "Yes ";
    else cout << "No ";
}
void Date(ll a, ll b)
{
    ll month[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
    if (1 <= a && a <= 12 && 1 <= b && b <= month[a]) cout << "Yes\n";
    else cout << "No\n";
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    ll T;
    cin >> T;
    while (T--)
    {
        ll a, b;
        cin >> a >> b;

        Time(a, b);
        Date(a, b);
    }
}
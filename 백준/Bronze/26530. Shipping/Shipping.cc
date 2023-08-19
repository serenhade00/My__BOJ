#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t, n, i;
    string s;
    cin >> t;
    cout.precision(2);
    cout << fixed;
    while (t--)
    {
        cin >> n;
        double sum = 0, cnt, price;
        for (i = 0; i < n; i++)
        {
            cin >> s >> cnt >> price;
            sum += cnt * price;
        }
        cout << '$' << sum << "\n";
    }
}
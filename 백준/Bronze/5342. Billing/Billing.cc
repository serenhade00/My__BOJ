#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    string s;
    double ans = 0;

    while (true)
    {
        cin >> s;
        if (s == "EOI") break;
        if (s == "Paper") ans += 57.99;
        else if (s == "Printer") ans += 120.50;
        else if (s == "Planners") ans += 31.25;
        else if (s == "Binders") ans += 22.50;
        else if (s == "Calendar") ans += 10.95;
        else if (s == "Notebooks") ans += 11.20;
        else ans += 66.95;
    }

    cout << fixed; cout.precision(2);
    cout << '$' << ans;
}
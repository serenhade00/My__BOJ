#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll Year;

    while (true)
    {
        cin >> Year;
        if (Year == 0) break;
        cout << Year << ' ';

        if (Year % 4 == 0 && Year >= 1896)
        {
            if (Year == 1916 || Year == 1940 || Year == 1944) cout << "Games cancelled";
            else if (Year > 2020) cout << "No city yet chosen";
            else cout << "Summer Olympics";
        }
        else cout << "No summer games";
        cout << "\n";
    }
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ans = 0, x;
    string s;

    while (cin >> s >> x)
        if (s == "Es") ans += x * 21;
        else ans += x * 17;
    cout << ans;
}
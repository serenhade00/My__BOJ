#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int cnt1 = 0, cnt2 = 0;

    cin >> s;
    for (char c : s)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') cnt1++;
        if (c == 'y') cnt2++;
    }
    cout << cnt1 << ' ' << cnt1 + cnt2;
}
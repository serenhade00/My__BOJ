#include <iostream>
#include <string>

using namespace std;

int main()
{
    int len, cnt = 0;
    string s;

    cin >> len >> s;
    for (char c : s)
        if (c == 'o') cnt++;
        else cnt += 2;
    cout << cnt;
}
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s1, s2;
    cin >> s1 >> s2;
    int x1, x2, y1, y2;
    x1 = s1[0] - 'a', x2 = s2[0] - 'a';
    y1 = s1[1] - '0', y2 = s2[1] - '0';
    cout << min(abs(x1-x2), abs(y1-y2)) << ' ' << max(abs(x1-x2), abs(y1-y2));
}
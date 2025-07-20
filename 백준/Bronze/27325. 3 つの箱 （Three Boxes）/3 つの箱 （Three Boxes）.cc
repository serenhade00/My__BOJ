#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int len, i, cnt = 0, now = 1;
    char c;

    cin >> len;
    for (i = 0; i < len;i++)
    {
        cin >> c;
        if (c=='L')
            now = max(now - 1, 1);
        else
            now = min(now + 1, 3);
        if (now==3)
            cnt++;
    }
    cout << cnt;
}
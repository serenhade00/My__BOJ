#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, i, cnt = 0;
    string s, s2;

    cin >> N >> s >> s2;
    for (i = 0; i < N; i++)
        if (s[i] != s2[i])
            cnt++;
    cout << cnt;
}
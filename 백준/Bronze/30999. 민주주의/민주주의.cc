#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int N, M, i, ans = 0, cnt;
    string s;
    cin >> N >> M;
    for (i = 0; i < N; i++)
    {
        cnt = 0;
        cin >> s;
        for (char c : s)
            if (c == 'O')
                cnt++;
        if (cnt > M / 2) ans++;
    }
    cout << ans;
}